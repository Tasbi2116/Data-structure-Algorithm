#include<iostream>
using namespace std;
int main()
{
    int a[15], i = 0, j = 0, pos = 0, num = 0;
    for(i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    cin>>pos;
    cin>>num;
    for(j = 9; j >= pos; j--)
    {
        a[j+1] = a[j];
    }
    a[pos] = num;
    for(i = 0; i < 11; i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}