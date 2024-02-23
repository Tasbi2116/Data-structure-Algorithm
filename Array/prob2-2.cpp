#include<iostream>
using namespace std;
int main()
{
    int a[10], i = 0, j = 0, large = 0, small = 0;
    //float avg = 0;
    for(i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    large = a[0];
    small = a[0];
    for(j = 0; j < 5; j++)
    {
        cout<<a[j]<<" ";
    }
    for(i = 0; i < 5; i++)
    {
       if(large < a[i])
       {
            large = a[i];
       }
       if(small > a[i])
       {
            small = a[i];
       }
    }
    cout<<"\n"<<large<<" "<<small;
    
    return 0;
}