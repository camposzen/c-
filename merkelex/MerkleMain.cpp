#include "MerkleMain.h"

MerkleMain::MerkleMain()
{}

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

void MerkleMain::loadOrderBook() {
    this->orders.push_back(OrderBookEntry{1000, 0.02, "2024/03/16 17:05:24.112233", "BTC/USDT", OrderBookType::bid});
    this->orders.push_back(OrderBookEntry{2000, 0.02, "2024/03/15 17:05:24.112233", "BTC/USDT", OrderBookType::bid});
}

void MerkleMain::printHelp()
{
    std::cout << "Your aim is to make money." << std::endl;
}

void MerkleMain::printMarkeStat()
{
    std::cout << "There are " << this->orders.size() << " entries" << std::endl;
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
