#include "Piece.h"
 using namespace std;

Piece::Piece()
{
    xPos=0;
    yPos=0;
}
Piece::Piece(int x,int y)
{
    xPos = x;
    yPos = y;
}
void Piece::display()
{
    cout << getType() << " at (" << xPos << "," << yPos << ")."<<endl;
}
