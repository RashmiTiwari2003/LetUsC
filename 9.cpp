#include <iostream>
using namespace std;

int main()
{
    int c1, c2, r, x, y;
    cout << "Enter center of a circle: ";
    cin >> c1;
    cout << "Enter center of a circle: ";
    cin >> c2;
    cout << "Enter radius of a circle: ";
    cin >> r;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    // if (x > 0 && y > 0)
    // {
    //     if ((((c1 + r) > x) && ((c2 + r) > y)) || (((c1 - r) < x) && ((c2 - r) < y)))
    //     {
    //         cout << "Inside Circle";
    //     }
    //     else if (((c1 + r) == x) && ((c2 + r) == y))
    //     {
    //         cout << "On the Circle";
    //     }
    //     else
    //     {
    //         cout << "Outside Circle";
    //     }
    // }
    // else
    // {
    //     if (((c1 - r) < x) && ((c2 - r) < y))
    //     {
    //         cout << "Inside Circle";
    //     }
    //     else if (((c1 - r) == x) && ((c2 - r) == y))
    //     {
    //         cout << "On the Circle";
    //     }
    //     else
    //     {
    //         cout << "Outside Circle";
    //     }
    // }

    if (((x-c1)*(x-c1))+((y-c2)*(y-c2))<(r*r))
    {
        cout<<"Inside Circle";
    }
    else
    {
        cout<<"Outside Circle";
    }
}