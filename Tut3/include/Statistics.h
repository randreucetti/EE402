#ifndef STATISTICS_H
#define STATISTICS_H
#include <iostream>
#include <vector>

using std::vector;
class Statistics
{
    private:
        vector<double> nums;

    public:
        Statistics(vector<double>);
        virtual void display();
        virtual double average();
        virtual double max();
        virtual double min();
        virtual void sortVec();
        virtual void median();
};

#endif // STATISTICS_H
