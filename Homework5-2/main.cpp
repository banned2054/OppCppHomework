#include "Experiment.h"

int main()
{
    point p;
    p.input();
    ++p;
    cout << "++p:" << endl;
    p.output();
    --p;
    cout << "--p:" << endl;
    p.output();
    cout << "p++:" << endl;
    p++.output();
    cout << "p:" << endl;
    p.output();
    cout << "--p:" << endl;
    p--.output();
    cout << "p:" << endl;
    p.output();
}