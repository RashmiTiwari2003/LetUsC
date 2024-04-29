#include <iostream>
using namespace std;

int main()
{
    int n,m,f=0,ff=0,th;
    cout<<"Input number: ";
    cin>>n;
    
    n=n/10;
    m=n%10;
    
    if(m>5)
    {
        f=1;
        m=m-5;
    }
    
    n=n/10;
    cout<<n<<"(100) + "<<f<<"(50) + "<< m<<"(10)"<<endl;

    while (n>=5)
    {
        n=n-5;
        ff++;
    }

    cout<<ff<<"(500) + "<<n<<"(100) + "<<f<<"(50) + "<< m<<"(10)";
    
    return 0;
}