#include<iostream>
using namespace std;
int main()
{
    int tree[10], i = 0, ind = 0;
    for(i = 0; i < 10; i++)
    {
        cin>>tree[i];
    }
    for(i = 0; i < 10; i++)
    {
        cout<<tree[i]<<" ";
    }
    cout<<endl;
    cin>>ind;
    cout<<"Index data: "<<tree[ind]<<endl;
    int lchild = 2*ind+1, rchild = 2*ind+2;
    if(lchild > 9 && rchild > 9)
    {
        cout<<"Doesn't have a child"<<endl;
    }
    else if(rchild > 9)
    {
        cout<<"Left child: "<<tree[lchild]<<endl;
        cout<<"Doesn't have right child"<<endl;
    }
    else
    {
        cout<<"Left child: "<<tree[lchild]<<endl;
        cout<<"Right child: "<<tree[rchild]<<endl;
    }


}