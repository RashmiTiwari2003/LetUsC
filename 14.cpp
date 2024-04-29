#include <iostream>
using namespace std;

int main()
{
    int n,r,s=0,a=1;
    cout<<"Enter Number in decimal: ";
    cin>>n;
    int d=n;
    do{
        r=d%8;
        s=r*a+s;
        d=d/8;
        a=a*10;
    }while(d!=0);
    cout<<"Decimal "<<n<<" in Octal is "<<s;
    return 0;
}