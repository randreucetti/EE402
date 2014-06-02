#include "Queen.h"

using namespace std;

Queen::Queen():
    Bishop()
{}

Queen::Queen(int x, int y):
    Bishop(x,y)
{}

string Queen::getType()
{
    return "Queen";
}
void Queen::display()
{
    Bishop::display();
}
void Queen::staticDisplay()
{
    cout << "Queens static display method" << endl;
}
