#include<iostream>
using namespace std;
int main()
{
    int a[5], b[5], c[10], i = 0, j = 0,l = 0, m = 0;
    for(i =  0; i < 5; i++)
    {
        cin>>a[i];
    }
    for(j =  0; j < 5; j++)
    {
        cin>>b[j];
    }
    int x = a[l];
    int y = b[m];
    for(i = 0; i < 10; i++)
    {
        if(x < y)
        {
            c[i] = x;
            //l++;
            x = a[++l];
        }
        else
        {
            c[i] = y;
            //m++;
            y = b[++m];
        }
    }
    for(j = 0; j < 10; j++)
    {
        cout<<c[j]<<" ";
    }
}