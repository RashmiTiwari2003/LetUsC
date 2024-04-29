#include <iostream>
using namespace std;

int main()
{
    int n,s=0,m,r=1;
    cout<<"Input number: ";
    cin>>n;

    while(n>0)
    {
        m=n%10+1;
        s=s+m*r;
        n=n/10;
        r=r*10;
    }
    cout<<s;

    return 0;
}