#include<iostream>
using namespace std;
int main()
{
    int a[10], i = 0, j = 0, sum = 0;
    float avg = 0;
    for(i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for(j = 0; j < 10; j++)
    {
        cout<<a[j];
    }
    for(i = 0; i < 10; i++)
    {
        sum += a[i];
    }
    avg = (float)sum / 10;
    cout<<"\n"<<sum<<" ";
    cout<<avg;
    return 0;
}