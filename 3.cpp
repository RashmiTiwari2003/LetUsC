#include <iostream>
using namespace std;

int main()
{
    int n,s=0,m;
    cout<<"Input Number: ";
    cin>>n;
    s=s+n%10;
    while(n>0)
    {
        m=n%10;
        n=n/10;
    }
    s=s+m;
    cout<<s;
    return 0;
}