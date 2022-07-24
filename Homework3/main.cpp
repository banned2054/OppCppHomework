#include "Experiment.h"

int main()
{
    cout << "Please choose the type of shape:" << endl;
    cout << "\t1:rectangle\t2:circle\t3:square" << endl;
    int mode;
    cin >> mode;
    float a1, a2;
    switch (mode)
    {
        case 1:
        {
            cout << "Please input lenght and width:" << endl;
            cin >> a1 >> a2;
            rectangle r(a1, a2);
            r.get_area();
            break;
        }
        case 2:
        {
            cout << "Please input radiu:" << endl;
            cin >> a1;
            circle c(a1);
            c.get_area();
            break;
        }
        case 3:
        {
            cout << "Please input lenght:" << endl;
            cin >> a1;
            square s(a1);
            s.get_area();
            break;
            
        }
        default:
            break;
    }
    return 0;
}