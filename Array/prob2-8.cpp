#include<iostream>
using namespace std;
int main()
{
    int a[3][4], i = 0, j = 0, sumb = 0;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            if(i == 0 || i == 2)
            {
                sumb += a[i][j];
            }
            if(j == 0 || j == 3)
            {
                sumb += a[i][j];
            }
        }
    }
    cout<<sumb - a[0][0] - a[0][3] - a[2][0] - a[2][3];
}