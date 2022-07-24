#include "experiment.h"


string circle::get_name()
{
    return name;
}

float circle::get_radiu()
{
    return radiu;
}

void circle::input()
{
    cin >> name;
    cout << "Please input the coordinate of the center of circle:" << endl;
    cin >> center.x >> center.y;
    cout << "Please input the radiu of circle" << endl;
    cin >> radiu;
    return;
}

point circle::get_center()
{
    return center;
}

void two_circle(circle circle_1, circle circle_2)
{
    
    point center_1 = circle_1.get_center();
    point center_2 = circle_2.get_center();
    float distant = ((center_1.x - center_2.x) * (center_1.x - center_2.x)) + ((center_1.y - center_2.y) * (center_1.y - center_2.y));
    distant = sqrt(distant);//��Բ��֮��ľ���
    
    float radiu_1 = circle_1.get_radiu();
    float radiu_2 = circle_2.get_radiu();
    
    /********如果圆心距离大于半径之和，则两圆相离*********/
    if (distant > radiu_1 + radiu_2)
    {
        cout << "The two circle are not intersect";
        return;
    }
    
    /****如果圆心距离大于半径只差，小于半径之和，则相交****/
    if (distant > fabs(radiu_1 - radiu_2) && distant < radiu_1 + radiu_2)
    {
        cout << "The two circle are intersect";
        return;
    }
    
    /********************相切***********************/
    if (distant == fabs(radiu_1 - radiu_2) || distant == radiu_1 + radiu_2)
    {
        cout << "The two circle are tangent";
        return;
    }
    
    /************其他情况，小圆包于大圆中***************/
    string small_circle, big_circle;
    if (radiu_1 < radiu_2)
    {
        small_circle = circle_1.get_name();
        big_circle = circle_2.get_name();
    }
    else
    {
        small_circle = circle_2.get_name();
        big_circle = circle_1.get_name();
    }
    cout << "The circle:" << small_circle << " is in the circle:" << big_circle;
}