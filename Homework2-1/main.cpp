#include "Experiment.h"

int main()
{
    circle circle_1;
    circle circle_2;
    
    cout << "Please input the name of circle" << endl;
    circle_1.input();
    
    cout << "Please input another name of circle" << endl;
    circle_2.input();
    two_circle(circle_1, circle_2);
    
    return 0;
}