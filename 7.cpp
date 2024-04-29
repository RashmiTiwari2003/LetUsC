#include <iostream>
using namespace std;

int main()
{
    int n,y,m,d;

    int arr[]={0,3,3,6,1,4,6,2,5,0,3,5};
    cout<<"Enter date in ddmmyyyy format: ";
    cin>>n;

    y=n%10000;
    m=n%1000000;
    d=n%100000000;

    if(((n%100)!=0 && (n%4)==0) || (n%400)==0)
    {

    }

    return 0;
}