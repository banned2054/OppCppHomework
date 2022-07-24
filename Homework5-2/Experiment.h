#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <iostream>

using namespace std;

class point
{
private:
    int x, y;
public:
    point()
    {
        x = 0;
        y = 0;
    }
    
    point(int in_x, int in_y)
    {
        x = in_x;
        y = in_y;
    }
    
    void input();
    
    void output();
    
    point operator++()
    {
        ++x;
        ++y;
        return point(x, y);
    };
    
    point operator++(int)
    {
        point p(x, y);
        ++x;
        ++y;
        return p;
    };
    
    point operator--()
    {
        --x;
        --y;
        return point(x, y);
    };
    
    point operator--(int)
    {
        point p(x, y);
        --x;
        --y;
        return p;
    };
};

#endif