#include "Experiment1.h"

int main()
{
    matrix *test = new matrix;    //输入输出测试
    matrix *a = new matrix;        //加减法测试
    matrix *b = new matrix;
    int n;
    int mode;
    
    cout << "Please choose the function you want to have:" << endl;
    cout << "\t1: input and output the matrix" << endl
         << "\t2:the calculation of two matrix(include subtraction and addition)" << endl
         << "\t3:the calculation between matrix A1, A2, A3" << endl;
    
    while (1)
    {
        cin >> mode;
        if (!mode) break;
        switch (mode)
        {
            case 1:
                cout << "Please input the matrix:" << endl;
                test->input();
                cout << endl;
                cout << "Your inputed matrix is:" << endl;
                cout << endl;
                test->output();
                break;
            case 2:
                cout << "Please input the matrix a:" << endl;
                a->input();
                cout << endl << "Please input the matrix b:" << endl;
                b->input();
                cout << endl << "Please choose the mode of matrix:" << endl;
                cout << "0:Subtraction\t1:addition" << endl;
                cin >> n;
                count_matrix(a, b, n);
                break;
            case 3:
                cout << "Please input the matrix A1:" << endl;
                a->input();
                cout << "Please input the matrix A2:" << endl;
                b->input();
                cout << "A1 + A2:" << endl;//A1 A2 A3 之间的运算
                count_matrix(a, b, 1);
                cout << "A1 - A2:" << endl;
                count_matrix(a, b, 0);
                break;
        }
        
        cout << "Do you want to continue? You can input mode to continue, or input 0 to end" << endl;
    }
    
    delete (test);
    delete (a);
    delete (b);
    return 0;
}