#ifndef QUEEN_H
#define QUEEN_H
#include<iostream>
#include<string>
#include "Bishop.h"
#include "Rook.h"

using std::string;
//overcame diamond problem.
class Queen : public virtual Bishop, public virtual Rook //multiple inheritance #3
{
    public:
        Queen();
        Queen(int x, int y);
        string getType();
        void display();
        void staticDisplay();

};

#endif // QUEEN_H
