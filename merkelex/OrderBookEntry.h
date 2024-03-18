#pragma once

#include <string>

enum class OrderBookType{ask, bid}; 

class OrderBookEntry
{
    public:

        double price;
        double amount;
        std::string timetamp;
        std::string product;
        OrderBookType orderType;

        OrderBookEntry(double _price, double _amount, std::string _timestamp, std::string _product, OrderBookType _orderType);
};