#include "Bishop.h"

using namespace std;

Bishop::Bishop():
    Piece()
{}

Bishop::Bishop(int x, int y):
    Piece(x,y)
{}

Bishop::Bishop(const Bishop &sourceBishop):     //our copy constructor
    Piece(sourceBishop.xPos,(sourceBishop.yPos+7))
{}
string Bishop::getType()
{
    return "Bishop";
}

void Bishop::moveNE(int i)
{
    xPos += i;
    yPos += i;
}

void Bishop::moveSE(int i)
{
    xPos += i;
    yPos -= i;
}

void Bishop::moveSW(int i)
{
    xPos -= i;
    yPos -= i;
}

void Bishop::moveNW(int i)
{
    xPos -= i;
    yPos += i;
}
