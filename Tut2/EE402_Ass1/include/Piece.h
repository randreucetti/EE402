#ifndef PIECE_H
#define PIECE_H
#include<iostream>
#include<string>
using std::string;

class Piece     //a chess piece
{
    protected:  //these are protected as children will manipulate in differient ways #9

        int xPos;   //positions on board
        int yPos;

    public:
        Piece();
        Piece(int x,int y); //#1 multiple constructors
        virtual void display();    //abstract class #6
        virtual string getType() = 0;
};

#endif // PIECE_H
