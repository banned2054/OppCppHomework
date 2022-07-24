#include "Experiment.h"

matrix input()
{
    int in_row, in_line;
    string in_name;
    
    cout << "Please input the matrix's name:" << endl;
    cin >> in_name;
    
    cout << "Please input the matrix " << in_name << "'s line and row:" << endl;
    cin >> in_line >> in_row;
    
    matrix a(in_line, in_row, in_name);
    
    cout << "Please input the matrix:" << endl;
    for (int i = 0; i < in_line; i++)
        for (int j = 0; j < in_row; j++)
        {
            int in_data;
            cin >> in_data;
            a.data[in_row * i + j] = in_data;
        }
    return a;
}

void matrix::output()
{
    cout << endl << "The matrix " << name << " is:" << endl;
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << data[row * i + j] << " ";
        }
        cout << endl;
    }
}

matrix copy(matrix A1)
{
    string name = "Copied_matrix";
    int line = A1.get_line();
    int row = A1.get_row();
    matrix a(line, row, name);
    
    for (int i = 0; i < line; i++)
    {
        for (int j = 0; j < row; j++)
        {
            a.data[row * i + j] = A1.data[row * i + j];
        }
    }
    return a;
}

string matrix::get_name()
{
    return name;
}

matrix count_matrix(matrix A1, matrix A2, int mode)
{
    int line = A1.get_line();
    int row = A1.get_row();
    matrix A3(line, row, "A3");
    
    if (mode)
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < row; j++)
            {
                A3.data[row * i + j] = A1.data[row * i + j] + A2.data[row * i + j];
            }
        }
    else
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < row; j++)
            {
                A3.data[row * i + j] = A1.data[row * i + j] - A2.data[row * i + j];
            }
        }
    return A3;
}

matrix *count_matrix_pointer(matrix *pA1, matrix *pA2, int mode)
{
    int line = pA1->get_line();
    int row = pA1->get_row();
    matrix *pA3 = new matrix(line, row, "pA3");
    
    if (mode)
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < row; j++)
            {
                pA3->data[i * row + j] = pA1->data[i * row + j] + pA2->data[i * row + j];
            }
        }
    else
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; j < row; j++)
            {
                pA3->data[i * row + j] = pA1->data[i * row + j] - pA2->data[i * row + j];
            }
        }
    return pA3;
}

matrix *input_pointer()
{
    int in_row, in_line;
    string in_name;
    
    cout << "Please input the matrix's name:" << endl;
    cin >> in_name;
    
    cout << "Please input the matrix " << in_name << "'s line and row:" << endl;
    cin >> in_line >> in_row;
    
    matrix *a = new matrix(in_line, in_row, in_name);
    
    cout << "Please input the matrix:" << endl;
    for (int i = 0; i < in_line; i++)
        for (int j = 0; j < in_row; j++)
        {
            int in_data;
            cin >> in_data;
            a->data[in_row * i + j] = in_data;
        }
    return a;
}