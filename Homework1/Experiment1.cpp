#include "experiment1.h"

void matrix::input()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> data[i][j];
        }
    }
    return;
}

void matrix::output()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << data[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}

void count_matrix(matrix *a, matrix *b, int mode)
{
    matrix *c = new matrix;//通过new分配空间
    if (mode)//加法运算
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 4; j++)
            {
                c->data[j][i] = a->data[j][i] + b->data[j][i];
            }
    }
    else//减法
    {
        for (int i = 0; i < 5; i++)
            for (int j = 0; j < 4; j++)
            {
                c->data[j][i] = a->data[j][i] - b->data[j][i];
            }
    }
    
    cout << endl << "The calculation of two matrix:" << endl;
    c->output();
    cout << endl;
    delete (c);//释放空间
    return;
}