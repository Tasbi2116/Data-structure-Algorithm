#include<iostream>
using namespace std;
void preorder(char *tree, int i)
{
    if(i < 15)
    {
        if(tree[i] != '0')
        {
            cout<<tree[i]<<" ";
        }
        preorder(tree,2*i+1);
        preorder(tree,2*i+2);
    }
}
void inorder(char *tree, int i)
{
    if(i < 15)
    {
        inorder(tree,2*i+1);
        if(tree[i] != '0')
        {
            cout<<tree[i]<<" ";
        }
        inorder(tree,2*i+2);
    }
}
void postorder(char *tree, int i)
{
    if(i < 15)
    {
        postorder(tree,2*i+1);
        postorder(tree,2*i+2);
        if(tree[i] != '0')
        {
            cout<<tree[i]<<" ";
        }
    }
}
int main()
{
    char tree[15];
    int i = 0, ind = 0;
    for(i = 0; i < 15; i++)
    {
        cin>>tree[i];
    }
    cout<<"Preorder: ";
    preorder(tree,0);
    cout<<endl<<"Inorder: ";
    inorder(tree,0);
    cout<<endl<<"Postorder: ";
    postorder(tree,0);
    cout<<endl;
}