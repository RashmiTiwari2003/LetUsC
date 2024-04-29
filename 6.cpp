#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter year: ";
    cin>>n;

    if(((n%100)!=0 && (n%4)==0) || (n%400)==0)
    {
        cout<<"Leap year";
    }
    else
    {
        cout<<"Not a Leap Year";
    }

    return 0;
}