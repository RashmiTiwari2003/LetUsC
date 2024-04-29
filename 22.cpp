#include <iostream>
using namespace std;

void fibo(int n,int a, int b)
{
    if(n>0)
    {
        cout<<a+b<<" ";
        fibo(n-1,b,a+b);
    }
}

int main()
{
    int n,a=0,b=1,s;
    cout<<"Enter number: ";
    cin>>n;
    cout<<a<<" "<<b<<" ";
    fibo(n-2,a,b);
    // for(int i=0;i<n-2;i++)
    // {
    //     s=a+b;
    //     a=b;
    //     b=s;
    //     cout<<s<<" ";
    // }
    return 0;
}