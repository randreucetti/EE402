#include "Board.h"

using namespace std;

Board::Board()
{
        numPieces = 32;
}

Board::Board(int i)
{
    numPieces = i;
}
void Board::display()
{
    cout <<"Board has " << numPieces << " pieces." << endl;
}
