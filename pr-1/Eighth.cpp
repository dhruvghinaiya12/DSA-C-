// check if the triangle is valid or not
// using angle
// using side

#include <iostream>
using namespace std;
int main()
{

    // int angle1, angle2, angle3, sum;
    // cout << "ente the three angle of the triangle"<<endl;
    // cin >> angle1 >> angle2 >> angle3;

    // sum = angle1 + angle2 + angle3;

    // if (sum == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
    // {
    //     cout << "the triangle is valid";
    // }
    // else
    // {
    //     cout << "the triangle is not valid";
    // }

    // int a, b, c;
    // cout << "enter the three side of triangle:" << endl;
    // cin >> a >> b >> c;
    // if (a + b > c && b + c > a && a + c > b)
    // {
    //     cout << "the triangle is valid";
    // }
    // else
    // {
    //     cout << "the triangle is not valid";
    // }

    int a, b, c;
    cout << "enter the three side of triangle:" << endl;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "Equilateral triangle";
    }
    else if (a == b || b == c || c == a)
    {
        cout << "isosceles triangle";
    }
    else
    {
        cout << "scalene triangle";
    }

    return 0;
}