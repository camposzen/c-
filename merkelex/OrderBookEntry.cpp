#include "OrderBookEntry.h"

OrderBookEntry::OrderBookEntry(
    double _price, double _amount, std::string _timestamp, std::string _product, OrderBookType _orderType):
        price(_price), amount(_amount), timetamp(_timestamp), product(_product), orderType(_orderType)
{};