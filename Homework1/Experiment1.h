
#ifndef EXPERIMENT1_H
#define EXPERIMENT1_H

#include <iostream>
#include <iomanip>

using namespace std;

class matrix
{
public:
    int data[4][5];
    
    void input();
    
    void output();
};

void count_matrix(matrix *a, matrix *b, int mode);

#endif 