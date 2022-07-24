#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <iostream>
using namespace std;
#define pi 3.1415926535

class shape
{
private:
    float radiu;
    float length, width;

public:
    void input(int mode, float a1, float a2);
    float get_radiu()
    {
        return radiu;
    }
    float get_length()
    {
        return length;
    }
    float get_width()
    {
        return width;
    }
    virtual void get_area(float in_radiu, float in_lenght, float in_width);
};

class circle:public shape
{
public:
    virtual void get_area(float in_radiu, float in_lenght, float in_width) override;
};

class rectangle :public shape
{
public:
    virtual void get_area(float in_radiu, float in_lenght, float in_width) override;
};

#endif