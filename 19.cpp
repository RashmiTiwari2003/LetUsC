#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, a;
    cout << "Enter number: ";
    cin >> n;
    a = n;
    string s = "";

    while (a > 0)
    {
        m = a % 10;
        if (m == 0)
        {
            a = a / 10;
            m = a % 10;
            if (m == 0)
            {
                a = a / 10;
                m = a % 10;
                if (m == 0)
                {
                    a = a / 10;
                    m = a % 10;
                    if (m == 1)
                    {
                        s = 'M' + s;
                    }
                    else
                    {
                        while (m > 0)
                        {
                            s = 'M' + s;
                            m--;
                        }
                    }
                    a = a / 10;
                    a = a * 1000;
                }
                else if (m == 1)
                {
                    s = 'C' + s;
                }
                else if (m < 5)
                {
                    while (m > 0)
                    {
                        s = 'C' + s;
                        m--;
                    }
                }
                else if (m == 5)
                {
                    s = 'D' + s;
                }
                else
                {
                    m = m - 5;
                    while (m > 0)
                    {
                        s = 'C' + s;
                        m--;
                    }
                    s = 'D' + s;
                }
                a = a / 10;
                a = a * 100;
            }
            else if (m == 1)
            {
                s = 'X' + s;
            }
            else if (m < 5)
            {
                while (m > 0)
                {
                    s = 'X' + s;
                    m--;
                }
            }
            else if (m == 5)
            {
                s = 'L' + s;
            }
            else
            {
                m = m - 5;
                while (m > 0)
                {
                    s = 'X' + s;
                    m--;
                }
                s = 'L' + s;
            }
            a = a / 10;
            a = a * 100;
        }
        else if (m == 1)
        {
            s = 'I' + s;
        }
        else if (m < 5)
        {
            while (m > 0)
            {
                s = 'I' + s;
                m--;
            }
        }
        else if (m == 5)
        {
            s = 'V' + s;
        }
        else
        {
            m = m - 5;
            while (m > 0)
            {
                s = 'I' + s;
                m--;
            }
            s = 'V' + s;
        }
        a = a / 10;
        a = a * 10;
    }
    cout << s;
    return 0;
}