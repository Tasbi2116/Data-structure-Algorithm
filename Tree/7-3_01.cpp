#include<iostream>
using namespace std;
void preorder(int *tree, int i)
{
    if(i < 10)
    {
        cout<<tree[i]<<" ";
        preorder(tree,2*i+1);
        preorder(tree,2*i+2);
    }
}
void inorder(int *tree, int i)
{
    if(i < 10)
    {
        inorder(tree,2*i+1);
        cout<<tree[i]<<" ";
        inorder(tree,2*i+2);
    }
}
void postorder(int *tree, int i)
{
    if(i < 10)
    {
        postorder(tree,2*i+1);
        postorder(tree,2*i+2);
        cout<<tree[i]<<" ";
    }
}
int main()
{
    int tree[10], i = 0, ind = 0;
    for(i = 0; i < 10; i++)
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