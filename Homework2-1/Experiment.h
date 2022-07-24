#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <iostream>
#include <cmath>

using namespace std;

class point            //点的类，用于储存坐标
{
public:
    float x, y;
};

class circle
{
private:
    point center;    //圆心
    string name;    //圆的名字
    float radiu;    //半径

public:
    string get_name();
    
    float get_radiu();
    
    void input();
    
    point get_center();
};

void two_circle(circle circle_1, circle circle_2);

#endif