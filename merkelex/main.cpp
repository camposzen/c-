#include <iostream>

int main()
{
    while (true)
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

        int option;
        std::cin >> option;
        std::cout << "You chose: " << option << std::endl;

        switch (option)
        {
        case 1:
            std::cout << "Invalid choice. Choose 1-6." << std::endl;
            break;
        case 2:
            std::cout << "Making money is your target." << std::endl;
            break;
        case 3:
            std::cout << "Market looks good." << std::endl;
            break;
        case 4:
            std::cout << "Make an offer - enter amount" << std::endl;
            break;
        case 5:
            std::cout << "Make a bid - enter amount" << std::endl;
            break;
        case 6:
            std::cout << "Your wallet is emtpy." << std::endl;
            break;
        default:
            std::cout << "Going to next time frame." << std::endl;
        }
    }

    return 0;
}