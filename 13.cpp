#include <iostream>
using namespace std;

int main()
{
    int n=21,x,c,player;
    int choice = 1;
    while(true)
    {
        player=0;
        c=0;
        cout<<"Enter matchsticks you pick: ";
        cin>>x;
        if(x>n || x>4)
        {
            cout<<"Too many matchsticks chosen. Pick Again."<<endl;
            continue;
        }
        n=n-x;
        if(n==0)
        {
            break;
        }
        c=5-x;
        cout<<"Computer chooses: "<<c<<endl;
        player=1;
        n=n-c;
        cout<<"Matchsticks left: "<<n<<endl;
    }
    if(player)
    {
        cout<<"Player Wins";
    }
    else
    {
        cout<<"Computer Wins";
    }
    return 0;
}