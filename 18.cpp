#include <iostream>
using namespace std;

int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

void bico(int n,int k)
{
    int a=fact(n)/(fact(k)*fact(n-k));
    cout<< a<<" ";
}

int main()
{
    for(int i=0;i<5;i++)
    {
        int a=2*(5-i);
        for (int k=0;k<a/2;k++)
        {
            cout<<" ";
        }
        for (int j=0;j<=i;j++)
        {
            bico(i,j);
        }
        cout<<endl;
    }
    return 0;
}