#ifndef PIECESET_H
#define PIECESET_H
#include<iostream>
#include<string>
#include <vector>
#include <algorithm>
using std::string;

template<class T>   //#18
class PieceSet
{
    std::vector<T> items;   //#19

    public:

    void addItem(T item)
    {
        items.push_back(item);
    }
    int getSize()
    {
        return items.size();    //#20
    }
};

#endif // PIECESET_H
