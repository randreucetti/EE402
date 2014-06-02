#ifndef BISHOP_H
#define BISHOP_H
#include<iostream>
#include<string>
#include "Piece.h"
using std::string;

class Bishop : public virtual Piece
{
    public:
        Bishop();
        Bishop(int x, int y);
        Bishop(const Bishop &sourceBishop);  //copy constructor, new bishop opposite source bishop #7
        virtual string getType();
        virtual void moveNE(int i);
        virtual void moveSE(int i);
        virtual void moveSW(int i);
        virtual void moveNW(int i);
};

#endif // BISHOP_H
