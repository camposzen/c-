#include "MerkleMain.h"

MerkleMain::MerkleMain()
{
}

void MerkleMain::init()
{
    this->loadOrderBook();
    int option;
    while (true)
    {
        this->printMenu();
        option = this->getUserOption();
        this->processUserOption(option);
    }
}

void MerkleMain::loadOrderBook()
{
    this->orders = CSVReader::readFile("orders.csv");
}

void MerkleMain::printHelp()
{
    std::cout << "Your aim is to make money." << std::endl;
}

void MerkleMain::printMarkeStat()
{
    std::cout << "Orderbook contains: " << this->orders.size() << " entries" << std::endl;
    unsigned int bids = 0;
    unsigned int asks = 0;
    for (OrderBookEntry &o : this->orders)
    {
        if (o.orderType == OrderBookType::ask)
        {
            ++asks;
        }
        else if (o.orderType == OrderBookType::bid)
        {
            ++bids;
        }
    }
    std::cout << "Total asks: " << asks << std::endl;
    std::cout << "Total bids:" << bids << std::endl;
}

void MerkleMain::entertOffer()
{
    std::cout << "Make an offer" << std::endl;
}

void MerkleMain::enterBid()
{
    std::cout << "Make a bid" << std::endl;
}

void MerkleMain::printWallet()
{
    std::cout << "Your wallet is emtpy." << std::endl;
    std::cout << std::endl;
}

void MerkleMain::nextIteraction()
{
    std::cout << "Next time frame" << std::endl;
}

void MerkleMain::printMenu()
{
    std::cout << "=========================== " << std::endl;

    // 1 print help
    std::cout << "1: Help" << std::endl;

    // 2 print exchange stat
    std::cout << "2: Exchange stats" << std::endl;

    // 3 make an offer
    std::cout << "3: Make an offer" << std::endl;

    // 4 make a bid
    std::cout << "4: Make a bid" << std::endl;

    // 5 print wallet
    std::cout << "5: Wallet" << std::endl;

    // 6
    std::cout << "6: Continue" << std::endl;

    std::cout << "=========================== " << std::endl;
    std::cout << "Type in 1-6: ";
}

int MerkleMain::getUserOption()
{
    int option;
    std::cin >> option;
    std::cout << "You chose: " << option << std::endl;
    return option;
}

void MerkleMain::processUserOption(int option)
{
    switch (option)
    {
    case 1:
        printHelp();
        break;
    case 2:
        printMarkeStat();
        break;
    case 3:
        entertOffer();
        break;
    case 4:
        enterBid();
        break;
    case 5:
        printWallet();
        break;
    case 6:
        nextIteraction();
        break;
    default:
        // std::cout << "Going to next time frame." << std::endl;
        std::cout << "Invalid choice. Choose 1-6." << std::endl;
        break;
    }
}
