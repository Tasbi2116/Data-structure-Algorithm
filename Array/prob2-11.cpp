#include<iostream>
using namespace std;
int main()
{
    int a[3][4],i = 0, j = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cout<<a[j][i]<<" ";
        }
        cout<<"\n";
    }
}