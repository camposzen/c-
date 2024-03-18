#pragma once

#include <iostream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "CSVReader.h"

class MerkleMain
{
    public: 
        MerkleMain();
        void init();

    private:
        void loadOrderBook();
        void printHelp();
        void printMarkeStat();
        void entertOffer();
        void enterBid();
        void printWallet();
        void nextIteraction();
        void printMenu();
        int getUserOption();
        void processUserOption(int option);

        std::vector<OrderBookEntry> orders;
};