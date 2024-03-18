#pragma once

#include "OrderBookEntry.h"
#include <vector>
#include <iostream>
#include <fstream>

class CSVReader
{
    public:
        CSVReader() = default;

        static std::vector<OrderBookEntry> readFile(std::string csvFile);

    private:
        static std::vector<std::string> tokenise(std::string csvLine, char separator);
        static OrderBookEntry toOrderbookEntry(std::vector<std::string> tokens);
};