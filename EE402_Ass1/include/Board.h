#ifndef BOARD_H
#define BOARD_H
#include<iostream>
#include<string>

struct Node //struct here #16, cannot use methods, variables are public by default;
{
    int posX;
    int posY;
};

class Board
{
    public:
        Board();
        Board(int i);
        virtual void display();
        int numPieces;

};

#endif // BOARD_H
