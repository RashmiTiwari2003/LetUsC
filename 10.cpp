#include <iostream>
using namespace std;

int main()
{
    char c;
    cout<<"Enter character: ";
    cin>>c;
    // if (isupper(c))
    // {
    //     cout<<"Uppercase";
    // }
    // else
    // {
    //     cout<<"Lowercase";
    // }

    if (c>= 65 && c<=90)
    {
        cout<<"Uppercase";
    }
    else if (c>=97 && c<=122)
    {
        cout<<"Lowercase";
    }
}