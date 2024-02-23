#include<iostream>
using namespace std;
int main()
{
    int tree[10], i = 0, ind = 0, left = 0, right = 0, level = 1;
    for(i = 0; i < 10; i++)
    {
        cin>>tree[i];
    }
    cout<<"\nLeftmost path: ";
    while(ind <= 9)
    {
        cout<<tree[ind]<<" ";
        ind = 2*ind+1;
    }
    ind = 0;
    cout<<"\nRightmost path: ";
    while(ind <= 9)
    {
        cout<<tree[ind]<<" ";
        ind = 2*ind+2;
    }
    cout<<endl;
    /*i = 0;
    ind = 0;
    while(i <= 9)
    {
        cout<<tree[i]<<" ";
        i = 2*i+1;
    }
    i = 0;
    cout<<endl;
    while(i <= 9)
    {
        cout<<tree[i]<<" ";
        if(i % 2 == 0)
        {
            i = 2*i+1;
        }
        else
        {
            i = 2*i+2;
        }
    }
    i = 0;
    //left = 1;
    cout<<endl;
    while(i <= 9)
    {
        cout<<tree[i]<<" ";
        if(level == )
        {
            i = 2*i+1;
        }
        else
        {
            i = 2*i+2;
        }
    }*/


}