#include<iostream>
using namespace std;
int main()
{
    int a[3][3], i = 0, j = 0, diasum = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            if(i == j || j == 2-i)
            {
                diasum += a[i][j];
            }
        }
    }
    cout<<diasum;
}