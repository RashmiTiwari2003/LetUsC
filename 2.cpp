#include <iostream>
using namespace std;

int main()
{
    int n,s=0,m;
    cout<<"Input number: ";
    cin>>n;

    while(n>0)
    {
        m=n%10;
        s=s*10+m;
        n=n/10;
    }
    cout<<s;
    return 0;
}