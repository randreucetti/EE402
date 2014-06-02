#ifndef ROOK_H
#define ROOK_H
#include<iostream>
#include<string>
#include "Piece.h"

using std::string;

class Rook : public virtual Piece
{
    public:
        Rook();
        Rook(int x, int y);
        virtual ~Rook();    //destructor #8
        virtual string getType();
        virtual void moveN(int i);
        virtual void moveS(int i);
        virtual void moveW(int i);
        virtual void moveE(int i);
        void staticDisplay();   //#13 dyamic binding
};

#endif // ROOK_H
