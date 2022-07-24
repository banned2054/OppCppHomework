#include "Experiment.h"

void shape::input(int mode, float a1, float a2)
{
    if (mode)
    {
        radiu = a1;
        length = 0;
        width = 0;
    }
    else
    {
        length = a1;
        width = a2;
        radiu = 0;
    }
}


void shape::get_area(float in_radiu, float in_lenght, float in_width)
{
    float area = pi * radiu * radiu;
    cout << area;
}

void rectangle::get_area(float in_radiu, float in_lenght, float in_width)
{
    float area = in_lenght * in_width;
    cout << area;
}
