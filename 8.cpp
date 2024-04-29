#include <iostream>
using namespace std;

int main()
{
    int x1,y1,x2,y2,x3,y3;
    cout<<"Enter x1: ";
    cin>>x1;
    cout<<"Enter x2: ";
    cin>>x2;
    cout<<"Enter x3: ";
    cin>>x3;
    cout<<"Enter y1: ";
    cin>>y1;
    cout<<"Enter y2: ";
    cin>>y2;
    cout<<"Enter y3: ";
    cin>>y3;
    double r=((x1*(y2-y3)) + (x2*(y3-y1)) + (x3*(y1-y2)))*0.5;
    if ( r== 0)
    {
        cout<<"Collinear";
    }
    else
    {
        cout<<"Non-collinear";
    }

    return 0;
}