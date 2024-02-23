#include<iostream>
using namespace std;
int main()
{
    int a[10],i = 0, j = 0, evensum = 0, oddsum = 0;
    for(i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for(j = 0; j < 10; j++)
    {
        cout<<a[j]<<" ";
    }
    for(i = 0; i < 10; i++)
    {
        if(a[i] % 2 == 0)
        {
            evensum += a[i];
        }
        else
        {
            oddsum += a[i];
        }
    }
    cout<<"\n"<<"Even numbers' sum = "<<evensum;
    cout<<"\n"<<"Odd numbers' sum = "<<oddsum;
    return 0;
}