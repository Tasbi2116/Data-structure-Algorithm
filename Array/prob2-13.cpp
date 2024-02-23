#include<iostream>
using namespace std;
int main()
{
    int A[4][3], B[3][4], C[4][4], i , j , k, n, count = 0;
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 3; j++)
        {
            cin>>A[i][j];
        }
    }
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin>>B[i][j];
        }
    }
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 4; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < 3; k++)
            {
                C[i][j] += A[i][k]*B[k][j];
                count++;
            }
        }
    }
    cout<<count;

}