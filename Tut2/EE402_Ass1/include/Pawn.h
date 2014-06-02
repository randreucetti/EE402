#ifndef PAWN_H
#define PAWN_H
#include<iostream>
#include<string>
#include "Piece.h"
using std::string;

class Pawn : public Piece
{
    private:
        friend void promote(Pawn &);    //friend function
        int rank; //rank system to show friend method, also #9 rank is private and cannot be accessed except by friend function
        static int pawnsCreated;    //#15
    public:
        Pawn();     //our constructors
        Pawn(int x, int y);
        Pawn(int r);
        virtual string getType();
        virtual void move();    //move one forward
        virtual void showRank();    //prints the rank
        virtual int getRank();  //returns rank as an int
        virtual int numCreated();   //returns total num created
        virtual bool isGreater(const Pawn &p);//#17

        Pawn operator + (Pawn); //overloading #10
        Pawn operator = (Pawn);
        bool operator == (Pawn);


};

#endif // PAWN_H
