#ifndef EXPERIMENT_H
#define EXPERIMENT_H

#include <iostream>
using namespace std;

class matrix
{
private:
    int line;
    int row;
    string name;
public:
    int* data;
    matrix(int in_line,int in_row,string in_name)
    {
        line = in_line;
        row = in_row;
        name = in_name;
        data = new int[line * row];
    }
    ~matrix()
    {
        cout << "This matrix " << name << " is deleted" << endl;
    }
    int get_line()
    {
        return line;
    }
    
    int get_row()
    {
        return row;
    }
    
    void output();
    string get_name();
};

matrix input();
matrix* input_pointer();
matrix copy(matrix A1);
matrix count_matrix(matrix A1, matrix A2, int mode);
matrix* count_matrix_pointer(matrix* pA1, matrix* pA2, int mode);

#endif