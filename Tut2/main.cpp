#include <iostream>
#include "Car.h"

using namespace std;

void square(int &i)
{
    i = i*i;
}

int blackJack(int a,int b)
{
    if(a>21 && b >21)
        return 0;
    if(a>21)
        return b;
    if(b>21)
        return a;
    if((21-a)<=(21-b))
        return a;
    if((21-b)<=(21-a))
        return b;
}
bool scoresIncreasing(int nums[],int size)
{
    int prevNum = nums[0];

    for(int i=1;i<size;i++)
    {
        if(prevNum>nums[i])
            return false;
        prevNum = nums[i];
    }
    return true;
}

bool hasOne(int i)
{
    if((i%10)==1)
        return true;
    if(i==0)
        return false;
    return hasOne(i/10);
}

int main()
{
    Car c("Red","Honda","Civic",5);
    cout << c;
}
