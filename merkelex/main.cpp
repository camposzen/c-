#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "OrderBookEntry.h"
#include "MerkleMain.h"
#include "CSVReader.h"

int main()
{
    // std::vector<double> prices;
    // std::vector<double> amounts;
    // std::vector<std::string> timestamps;
    // std::vector<std::string> products;
    // std::vector<OrderBookType> orderTypes;

    MerkleMain app{};
    app.init();
    return 0;
}