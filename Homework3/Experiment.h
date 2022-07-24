#ifndef EXPERIMENT3_H
#define EXPERIMENT3_H

#include <iostream>

using namespace std;

#define pi 3.1415926535

class shape
{
private:
    int type;
    float radiu;
    float length, width;
public:
    void input_type(int mode);
    
    void input(float a1, float a2);
    
    void get_area();
};

class rectangle : public shape
{
public:
    rectangle()
    {
        input_type(0);
    }
    
    rectangle(float a1, float a2)
    {
        cout << "11" << endl;
        input_type(0);
        input(a1, a2);
    }
    
    ~rectangle()
    {
        cout << "already delete this rectangle" << endl;
    }
};


class circle : public shape
{
public:
    circle()
    {
        input_type(1);
        cout << "22" << endl;
    }
    
    circle(float a1)
    {
        input_type(1);
        input(a1, 0);
        cout << "22" << endl;
    }
    
    ~circle()
    {
        cout << "delete this circle" << endl;
    }
};

class square : public rectangle
{
public:
    square()
    {
        input_type(0);
        cout << "33" << endl;
    }
    
    square(float a1)
    {
        input_type(0);
        input(a1, a1);
    }
    
    ~square()
    {
        cout << "33" << endl;
        cout << "already delete this object" << endl;
    }
};

#endif