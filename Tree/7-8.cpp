#include<iostream>
using namespace std;
void inorder(int *bst, int i)
{
    if(i < 14)
    {
        inorder(bst,2*i+1);
        cout<<bst[i]<<" ";
        inorder(bst,2*i+2);
    }
}
int main()
{
    int bst[14], i;
    for(i = 0; i < 14; i++)
    {
        cin>>bst[i];
    }
    inorder(bst,0);
}