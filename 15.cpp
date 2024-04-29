#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int count;
    double c= sqrt(203);
    for (int i = 2; i <= 300; i++)
    {
        count=1;
        for (int j=2;j*j<=i;j++)
        {
            if(i%j==0)
            {
                count=0;
                break;
            }
        }
        if(count)
        {
            cout<<i<<endl;
        }
    }
    
    return 0;
}