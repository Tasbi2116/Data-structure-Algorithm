#include<iostream>
using namespace std;
int main()
{
    int a[10],b[5],c[10],i = 0, j = 0, k = 0, l = 0;
    for(i = 0; i < 5; i++)
    {
        cin>>a[i];
    }
    for(j = 0; j < 5; j++)
    {
        cin>>b[j];
    }
    for(i = 0; i < 10; i++)
    {
        if(i < 5)
        {
            c[i] = a[k];
            k++;
        }
        else
        {
            c[i] = b[l];
            l++; 
        }
        
    }
    for(j = 0; j < 5; j++)
    {
        cout<<a[j]<<" ";
    }
    cout<<"\n";
    for(j = 0; j < 5; j++)
    {
        cout<<b[j]<<" ";
    }
    cout<<"\n";
    for(j = 0; j < 10; j++)
    {
        cout<<c[j]<<" ";
    }
    
    return 0;
}