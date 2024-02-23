#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][4], i = 0, j = 0, sum = 0;
    float avg = 0;
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cin>>a[i][j];
        }
    }
    for(j = 0; j < 10; j++)
    {
        sort(a[j],a[j]+3);
    }
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 4; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(i = 0; i < 10; i++)
    {
        for(j = 1; j < 4; j++)
        {
            sum += a[i][j];
        }
        avg = (float)sum / 2;
        cout<<avg<<"\n";
        sum = 0;
    }
}