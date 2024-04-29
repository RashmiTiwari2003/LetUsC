#include <iostream>
using namespace std;

int main()
{
    int n, m, s = 0, l = 0;
    cout << "Enter number: ";
    cin >> n;
    int x = n;
    int a = n;
    while (a > 0)
    {
        l++;
        a = a / 10;
    }
    while (n > 0)
    {
        int i=0,p=1;
        m = n % 10;
        while (i<l)
        {
            i++;
            p=p*m;
        }
        s = s + p;
        n = n / 10;
    }
    if (x == s)
    {
        cout << "Armstrong Number";
    }
    else
    {
        cout << "Not Armstrong Number";
    }
    return 0;
}