#include "Statistics.h"
#include <iostream>
#include <algorithm>

using namespace std;

Statistics::Statistics(vector<double> aNums)
{
    nums  = aNums;
}
void Statistics::display()
{
    cout << "\n Array [" ;
    for(int i=0;i<nums.size();i++)
    {
        cout << nums[i] << " ";
    }
    cout << " ] " << endl;
}
double Statistics::average()
{
    double total = 0;
    for(int i=0;i<nums.size();i++)
    {
        total +=nums[i];
    }
    return (total/nums.size());
}
double Statistics::max()
{
    double max = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]>max)
            max = nums[i];
    }
    return max;
}
double Statistics::min()
{
    double min = nums[0];
    for(int i=1;i<nums.size();i++)
    {
        if(nums[i]<min)
            min = nums[i];
    }
    return min;
}
void Statistics::sortVec()
{
    sort(nums.begin(),nums.end());
}
void Statistics::median()
{
    double median = 0;
    sortVec();
    if(nums.size()%2==0)
    {
        median =  ((nums[nums.size()/2] + nums[(nums.size()/2)-1])/2);
        cout << "Median is : " << median << endl;
    }
    else
    {
        median = nums[nums.size()/2];
        cout << "Median is : " << median << endl;
    }
}
