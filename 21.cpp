#include <iostream>
using namespace std;

int sum(int n,int i,int s)
{
    if(i>=5)
    {
        return s;
    }
    return s+sum(n/10,i+1,n%10);
}

int main()
{
    int n,i=0,s=0;
    cout<<"Enter number: ";
    cin>>n;
    cout<<sum(n,i,s);
    return 0;
}