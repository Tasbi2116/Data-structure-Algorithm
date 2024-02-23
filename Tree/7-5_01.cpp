#include<iostream>
using namespace std;
struct node
{
    char data;
    node *lchild,*rchild;
};
node *nptr;
node *createtree(node *curptr, char data)
{
    if(curptr == NULL)
    {
        nptr = new(node);
        nptr->data = data;
        nptr->lchild = NULL;
        nptr->rchild = NULL;
        curptr = nptr;
    }
    else if(curptr->lchild == NULL)
    {
        curptr->lchild = createtree(curptr->lchild, data);
    }
    else
    {
        curptr->rchild = createtree(curptr->rchild, data);
    }
    return curptr;
}
void inorder(node *curptr)
{
    if(curptr != NULL)
    {
        
        inorder(curptr->lchild);
        if(curptr->data != '0')
        {
            cout<<curptr->data;
        }
        inorder(curptr->rchild);
    }
}

int main()
{
    node *root;
    root = NULL;
    int i;
    char data;
    for(i = 0; i < 15; i++)
    {
        cin>>data;
        root = createtree(root, data);
    }
    cout<<endl<<"Inorder: ";
    inorder(root);
    cout<<endl;
    
}
