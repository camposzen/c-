#include <iostream>

void printHelp()
{
    std::cout << "Your aim is to make money." << std::endl;
}

void printMarkeStat()
{
    std::cout << "Market looks good." << std::endl;
}

void entertOffer()
{
    std::cout << "Make an offer" << std::endl;
}

void enterBid()
{
    std::cout << "Make a bid" << std::endl;
}

void printWallet()
{
    std::cout << "Your wallet is emtpy." << std::endl;
}

void nextIteraction()
{
    std::cout << "Next time frame" << std::endl;
}

void printMenu()
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

int getUserOption()
{
    int option;
    std::cin >> option;
    std::cout << "You chose: " << option << std::endl;
    return option;
}

void processUserOption(int option)
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

int main()
{
    while (true)
    {
        printMenu();
        int option = getUserOption();
        processUserOption(option);
    }
    return 0;
}