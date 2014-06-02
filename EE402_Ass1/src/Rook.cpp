#include "Rook.h"

using namespace std;

Rook::Rook():
    Piece()
{}

Rook::Rook(int x,int y):
    Piece(x,y)
{}

Rook::~Rook()   //destructor
{
    cout << "A rook has fallen." << endl;
}

string Rook::getType()
{
    return "Rook";
}
void Rook::moveN(int i)
{
    yPos += i;
}

void Rook::moveS(int i)
{
    yPos -= i;
}

void Rook::moveW(int i)
{
    xPos -= i;
}

void Rook::moveE(int i)
{
    xPos += i;
}
void Rook::staticDisplay() //#13
{
    cout<<"Rooks static display method"<<endl;
}
