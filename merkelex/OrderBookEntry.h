#pragma once

#include <string>

enum class OrderBookType{ask, bid, unknown}; 

class OrderBookEntry
{
    public:

        OrderBookEntry(double _price, double _amount, std::string _timestamp, std::string _product, OrderBookType _orderType);
 
        static OrderBookType toOrderbookType(std::string s);

        double price;
        double amount;
        std::string timetamp;
        std::string product;
        OrderBookType orderType;
};