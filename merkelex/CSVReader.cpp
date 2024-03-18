#include "CSVReader.h"

std::vector<OrderBookEntry> CSVReader::readFile(std::string file)
{
    std::ifstream csvFile{file};
    std::vector<OrderBookEntry> orders;

    if (csvFile.is_open())
    {
        std::string line;
        std::vector<std::string> tokens;

        while (std::getline(csvFile, line))
        {
            // std::cout << "tokenising line:" << line << std::endl;
            if (line.empty())
            {
                std::cout << "Bad line" << std::endl;
                continue;
            }
            tokens = tokenise(line, ',');
            if (tokens.size() != 5)
            {
                std::cout << "Bad line" << std::endl;
                continue;
            }
            orders.push_back(CSVReader::toOrderbookEntry(tokens));
            // std::cout << "ok" << std::endl;
        }
        csvFile.close();
    }
    else
    {
        std::cout << "Could not open file" << std::endl;
    }

    std::cout << orders.size() << " entries read from csv file" << std::endl;
    return orders;
}

std::vector<std::string> CSVReader::tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;
    unsigned int start;
    std::size_t end;
    std::string token;

    start = csvLine.find_first_not_of(separator, 0);
    do
    {
        end = csvLine.find_first_of(separator, start);

        if (start == csvLine.length() || start == end)
            break;

        if (end >= 0)
            token = csvLine.substr(start, end - start);
        else
            token = csvLine.substr(start, csvLine.length() - start);

        tokens.push_back(token);
        start = end + 1;

    } while (end != std::string::npos);

    return tokens;
}

OrderBookEntry CSVReader::toOrderbookEntry(std::vector<std::string> tokens)
{
    double price, amount;
    try
    {
        price = std::stod(tokens[3]);
        amount = std::stod(tokens[4]);
    }
    catch (const std::exception &e)
    {
        std::cout << "Bad float! " << tokens[3] << std::endl;
        std::cout << "Bad float! " << tokens[4] << std::endl;
        throw;
    }

    OrderBookEntry order{price, amount, tokens[0], tokens[1], OrderBookEntry::toOrderbookType(tokens[2])};
    return order;
}
