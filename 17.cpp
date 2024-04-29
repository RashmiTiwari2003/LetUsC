#include <iostream>
using namespace std;

int main()
{
    int c=1;
    for (int i=1;i<5;i++)
    {
        int a=2*(5-i);
        for (int k=0;k<a/2;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<i;j++)
        {
            cout<<c<<" ";
            c++;
        }
        cout<<endl;        
    }
    return 0;
}