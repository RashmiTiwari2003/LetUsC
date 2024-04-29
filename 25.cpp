#include <iostream>
using namespace std;

int checkarr(int arr[4][4],int sortedarr[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if (arr[i][j]!=sortedarr[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

void display(int arr[4][4])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(arr[i][j]==0)
            {
                cout<<"    ";
            }
            else
            {
                cout<<" "<<arr[i][j]<<" ";
            }
        }
        cout<<endl;
    }
}

void index(int *ind,int arr[4][4])
{
    for (int i=0;i<4;i++)
    {
        for (int j=0;j<4;j++)
        {
            if(arr[i][j]==0)
            {
                ind[0]=i;
                ind[1]=j;
            }
        }
    }
}

void Up(int ind[2],int (*arr)[4])
{
    int row=ind[0];
    int col=ind[1];
    if(row==0)
    {
        cout<<"Wrong Input"<<endl;
        return;
    }
    int num=row-1;
    arr[row][col]=arr[num][col];
    arr[num][col]=0;
}

void Down(int ind[2],int (*arr)[4])
{
    int row=ind[0];
    int col=ind[1];
    if(row==3)
    {
        cout<<"Wrong Input"<<endl;
        return;
    }
    int num=row+1;
    arr[row][col]=arr[num][col];
    arr[num][col]=0;
}

void Left(int ind[2],int (*arr)[4])
{
    int row=ind[0];
    int col=ind[1];
    if(col==0)
    {
        cout<<"Wrong Input"<<endl;
        return;
    }
    int num=col-1;
    arr[row][col]=arr[row][num];
    arr[row][num]=0;
}

void Right(int ind[2],int (*arr)[4])
{
    int row=ind[0];
    int col=ind[1];
    if(col==3)
    {
        cout<<"Wrong Input"<<endl;
        return;
    }
    int num=col+1;
    arr[row][col]=arr[row][num];
    arr[row][num]=0;
}

int main()
{
    char c;
    
    int arr[4][4]={{1,4,15,7},{8,10,2,11},{14,3,6,13},{12,9,5,0}};
    // int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
    int sortedarr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,0}};
    int ind[2]={3,3};

    display(arr);

    while(1)
    {
        int flag = checkarr(arr,sortedarr);
        if(flag)
        {
            cout<<"Over";
            break;
        }
        cout<<"Enter u to move space above"<<endl;
        cout<<"Enter d to move space down"<<endl;
        cout<<"Enter l to move space left"<<endl;
        cout<<"Enter r to move space right"<<endl;
        cin>>c;

        if(c=='u')
        {
            index(ind,arr);
            system("cls");
            Up(ind,arr);
            display(arr);
        }
        else if(c=='d')
        {
            index(ind,arr);
            system("cls");
            Down(ind,arr);
            display(arr);
        }
        else if(c=='l')
        {
            index(ind,arr);
            system("cls");
            Left(ind,arr);
            display(arr);
        }
        else if(c=='r')
        {
            index(ind,arr);
            system("cls");
            Right(ind,arr);
            display(arr);
        }
        else
        {
            cout<<"Wrong Input";
        }
    }

    return 0;
}