#include "Experiment.h"

int main()
{
    shape x;
    int n;
    float a1, a2;
    cin >> n;
    
    if (n)
    {
        cin >> a1;
        x.input(n, a1, 0);
    }
    else
    {
        cin >> a1 >> a2;
        x.input(n, a1, a2);
    }
    
    x.get_area(x.get_radiu(), x.get_length(), x.get_width());
    
    rectangle r;
    cin >> a1 >> a2;
    r.input(n, a1, a2);
    
    r.get_area(r.get_radiu(), r.get_length(), r.get_width());
    x.get_area(x.get_radiu(), x.get_length(), x.get_width());
    return 0;
}