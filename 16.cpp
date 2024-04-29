#include <iostream>
using namespace std;

int main()
{
    for(int i=7;i>0;i--)
    {
        // for (int j=0;j<i;j++)
        // {
        //     char c=j+65;
        //     cout<<c<<" ";
        // }
        // for(int j=4*(7-i)-2;j>0;j--)
        // {
        //     cout<<" ";
        // }
        // for (int j=i;j>0;j--)
        // {
        //     char c=j+64;
        //     if(j+64==71)
        //     {
        //         continue;
        //     }
        //     cout<<c<<" ";
        // }
        for (int j=0;j<i;j++)
        {
            char c=j+65;
            cout<<c;
        }
        for(int j=2*(7-i)-1;j>0;j--)
        {
            cout<<" ";
        }
        for (int j=i;j>0;j--)
        {
            char c=j+64;
            if(j+64==71)
            {
                continue;
            }
            cout<<c;
        }
        cout<<endl;
    }
    return 0;
}