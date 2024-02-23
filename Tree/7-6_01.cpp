#include<iostream>
using namespace std;
struct node
{
    int data;
    node *lchild, *rchild;
};
node *nptr;
node *createtree(node *curptr, int item)
{
    if(curptr == NULL)
    {
        nptr = new(node);
        nptr->data = item;
        nptr->lchild =NULL;
        nptr->rchild = NULL;
        curptr = nptr;
    }
    else if(curptr->lchild == NULL)
    {
        curptr->lchild = createtree(curptr->lchild, item);
    }
    else
    {
        curptr->rchild = createtree(curptr->rchild, item);
    }
    return curptr;
}
void postorder(node *curptr)
{
    if(curptr != NULL)
    {
        postorder(curptr->lchild);
        postorder(curptr->rchild);
        cout<<" "<<curptr->data;
    }
}
int main()
{
    node *root;
    root = NULL;
    int i, item;
    for(i = 0; i < 5; i++)
    {
        cin>>item;
        root = createtree(root,item);
    }
    cout<<endl;
    postorder(root);
    cout<<endl;
}
