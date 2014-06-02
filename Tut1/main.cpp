#include <iostream>
using namespace std;


double sumDouble(double d1,double d2)
{
    if(d1==d2)
        return ((d1+d2)*2);
    else
        return (d1+d2);
}

string helloName(string s)
{
    return "Hello " + s;
}

bool monkeyTrouble(bool m1,bool m2)
{
    if(m1==m2)
        return true;
    else
        return false;
}

void square(int &i)
{
    i=i*i;
}

int countEvens(int nums [],int size)
{
    int numEvens =0;
    for(int i=0;i<size;i++)
    {
        if(nums[i]%2==0)
            numEvens++;
    }
    return numEvens;
}

bool sum28(int nums [], int size)
{
    int counter = 0;

    for(int i=0;i<size;i++)
    {
        if(nums[i]==2)
        {
            counter +=2;
        }
    }
    if(counter==8)
        return true;
    else
        return false;
}

int factorial(int i)
{
    if(i==1)
        return 1;
    else
        return i*factorial(i-1);
}

int * reverse(int nums[],int size)
{
    int *reverseNums = new int[size];

    for(int i=0;i<size;i++)
    {
        reverseNums[i]=nums[((size-i)-1)];
    }
    return reverseNums;
}

int main(int argc, char*argv[])
{
    /*int wordLengths[9];
    for(int i=0;i<9;i++)
    {
        wordLengths[i] = 0;
    }
    for(int i=1;i<argc;i++)
    {
        string s = argv[i];
        wordLengths[(s.length()-1)]++;
    }
    for(int i=0;i<9;i++)
    {
        cout << "Length " << (i+1) << " characters: " << wordLengths[i] << endl;
    }*/
    int nums[] = {1,2,3,4,5};
    int *reverseNums = reverse(nums,5);

    for(int i=0;i<5;i++)
    {
        cout << reverseNums[i] << ", ";
    }
    return 0;
}
