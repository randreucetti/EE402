#include "Pawn.h"
using namespace std;

int Pawn::pawnsCreated = 0; //static variable, total num pawns
Pawn::Pawn():   //defailt constructor
Piece()
{
    rank = 0;
    pawnsCreated++;
}

Pawn::Pawn(int x, int y):   //constructor with position input
    Piece(x,y)
{
    rank = 0;
    pawnsCreated++;
}
Pawn::Pawn(int r)   //constructor with rank input
{
    rank = r;
    pawnsCreated++;
}
string Pawn::getType()  //#2 overiding
{
    return "Pawn";
}
void Pawn::move()   //move forward
{
    yPos++;
}
void Pawn::showRank()
{
    cout << "Pawns rank is: " << rank << endl;
}
int Pawn::getRank()
{
    return rank;
}

void promote(Pawn &p)   //our seperate friend function
{
    p.rank++;
}
Pawn Pawn::operator + (Pawn p)  //operator overloading #1-
{
    return Pawn(getRank()+p.getRank());
}

Pawn Pawn::operator = (Pawn p)
{
    cout << "Pawn of rank " << p.getRank() << " has been assigned." << endl;
    return p;
}

bool Pawn::operator == (Pawn p)
{
    if(getRank() == p.getRank())
        return true;
    else
        return false;
}
int Pawn::numCreated() //#15
{
    cout<< pawnsCreated << " pawns have been created." << endl;
}
bool Pawn::isGreater(const Pawn &p) //#17   pass by constant ref
{
    if(rank>p.rank)
        cout << "I am greater than this pawn." << endl;
    else
        cout << "I am not greater than this pawn." <<endl;
}
