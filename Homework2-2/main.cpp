#include "Experiment.h"

int main()
{
    cout << "Please choose the mode of matrix:" << endl;
    cout << "\t1:copy matrix from another matrix" << endl
         << "\t2:the calculation from A1 and A2" << endl
         << "\t3:the calculation from pA1 and pA2" << endl;
    int x;
    cin >> x;
    
    switch (x)
    {
        case 1:
        {
            matrix A1 = input();
            matrix A2 = copy(A1);
            A2.output();
            break;
        }
        case 2:
        {
            matrix A1 = input();
            matrix A2 = input();
            if (A1.get_row() != A2.get_row() || A1.get_line() != A2.get_line()) break;
            cout << "When A3 = A1 + A2, A3:";
            matrix A3 = count_matrix(A1, A2, 1);
            A3.output();
            cout << "When A3 = A1 - A2, A3:";
            A3 = count_matrix(A1, A2, 0);
            A3.output();
            break;
        }
        case 3:
        {
            matrix *pA1 = input_pointer();
            matrix *pA2 = input_pointer();
            if (pA1->get_row() != pA2->get_row() || pA1->get_line() != pA2->get_line()) break;
            cout << "When pA3 = pA1 + pA2, pA3:";
            matrix *pA3 = count_matrix_pointer(pA1, pA2, 1);
            pA3->output();
            cout << "When pA3 = pA1 - pA2, pA3:";
            pA3 = count_matrix_pointer(pA1, pA2, 0);
            pA3->output();
        }
    }
    
    return 0;
}