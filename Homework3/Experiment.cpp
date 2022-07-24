#include "Experiment.h"

void shape::input_type(int mode)
{
    type = mode;
}

void shape::input(float a1, float a2)
{
    if (type == 1) radiu = a1;
    else
    {
        length = a1;
        width = a2;
    }
}

void shape::get_area()
{
    float area;
    if (type == 1)
    {
        area = pi * radiu * radiu;
    }
    else
    {
        area = width * length;
    }
    cout << "This shape's area is :" << area << endl;
}