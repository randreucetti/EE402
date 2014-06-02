#include "Pawn.h"
#include "Queen.h"
#include "Rook.h"
#include "Board.h"
#include "Bishop.h"
#include "PieceSet.h"
using namespace std;

void displayNum(int i)  //for #12 const cast
{
    cout << "The number is " << i << endl;
}

int main()
{


    cout << "---------------------------" << endl;
    //#11------------------------
    Rook rooks [2] = {Rook(), Rook(1,3)};

    Rook *rPtr1 = &rooks[0];

    rPtr1->display();
    (rPtr1+1)->display();
    rPtr1->display();
    //------------------------------
     cout << "---------------------------" << endl;




    //#12 & 14--------------------------------
    int i = 100;    //static
    float f = static_cast<float>(i);
    f = f + 0.5;
    cout << f << endl;

     cout << "---------------------------" << endl;

    Board *bPtr1 = new Board;   //reinterpret   mem allocated using new
    bPtr1->display();
    long addr = reinterpret_cast<long>(bPtr1);
    Board *b1 = reinterpret_cast<Board*>(addr);
    b1->display();
    delete bPtr1;

     cout << "---------------------------" << endl;

    Rook *rPtr3 = new Queen;    //dynamic mem allocated using new
    Queen *qPtr2 = dynamic_cast<Queen*>(rPtr3);
    qPtr2->display();
    delete rPtr3;

     cout << "---------------------------" << endl;

    const int x = 10;
    displayNum(*const_cast<int*>(&x));  //const cast;
    //---------------------------------------------
     cout << "---------------------------" << endl;

    //#13
    //----------------------------------
    Rook r = Rook();
    Rook *rPtr2 = &r;
    Queen q = Queen();
    Queen *qPtr1 = &q;

    qPtr1->display();
    rPtr2->display();

    rPtr2 = qPtr1;
    rPtr2->display();    //dynamic binding on a virtual method
    rPtr2->staticDisplay(); //dynamic binding on a static method

     cout << "---------------------------" << endl;

    //#15
    //-------------------------------
    Pawn p1 = Pawn();
    p1.numCreated();
    Pawn p2 = Pawn();
    p2.numCreated();
    //------------------------------------

     cout << "---------------------------" << endl;

    //#16
    //-----------------------------------
    Node n;
    n.posX = 5;
    n.posY = 4;
    cout << "Node is at(" << n.posX << "," << n.posY << ")." << endl;
    //-----------------------------------------

     cout << "---------------------------" << endl;

    //#17
    //--------------------------------
    Pawn p3 = Pawn(6);
    Pawn p4 = Pawn(5);
    p3.isGreater(p4);
    //--------------------------------

     cout << "---------------------------" << endl;

    //#18, #19 & #20
    //--------------------------------
    PieceSet<Pawn> pawns;
    Pawn p5 = Pawn();
    Pawn p6 = Pawn();
    pawns.addItem(p5);
    pawns.addItem(p6);
    cout << pawns.getSize() << endl;
    //----------------------------------
     cout << "---------------------------" << endl;

    return 0;
}


