#include <iostream>
using namespace std;

void gcd(int a, int b)
{
    if (a % b == 0)
    {
        cout << b << " is the gcd";
    }
    else
    {
        gcd(b, a % b);
    }
}

int main()
{
    // int a, b, c;
    int a, b;

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // while (a % b > 0)
    // {
    //     c = a % b;
    //     a = b;
    //     b = c;
    // }
    // cout << b << " is the gcd.";

    gcd(a, b);

    return 0;
}