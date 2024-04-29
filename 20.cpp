#include <iostream>
using namespace std;

int main()
{
    int n,count;
    cout<<"Enter number: ";
    cin>>n;
    for (int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count=1;
            for(int j=2;j*j<=i;j++)
            {
                if(i%j==0)
                {
                    count=0;
                }
            }
            if(count)
            {
                cout<<i<<endl;
            }
        }
    }
    return 0;
}