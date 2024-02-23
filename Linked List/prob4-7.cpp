#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
//node *fptr1;
void printnode(node *ptr)
{
    node *tptr;
    tptr = ptr;
    while(tptr != NULL)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->next;
    }
    cout<<endl;    
}


int main()
{
    node *tptr, *nptr, *fptr1, * fptr2;
    fptr1 = NULL;
    fptr2 = NULL;
    for(int i = 0; i < 5; i++)
    {
        nptr = new (node);
        cin>>nptr->data;
        nptr->next = NULL;
        if(fptr1 == NULL)
        {
            fptr1 = nptr;
            tptr = fptr1;
        }
        else
        {
            tptr->next = nptr;
            tptr= nptr;
        }
    }
    printnode(fptr1);
    for(int i = 0; i < 10; i++)
    {
        nptr = new (node);
        cin>>nptr->data;
        nptr->next = NULL;
        if(fptr2 == NULL)
        {
            fptr2 = nptr;
            tptr = fptr2;
        }
        else
        {
            tptr->next = nptr;
            tptr= nptr;
        }
    }
    printnode(fptr2);
    node *fptr3, *tptr1, *tptr2;
    fptr3 = NULL;
    tptr1 = fptr1;
    tptr2 = fptr2;
    for(int i = 0; i < 15; i++)
    {
        nptr = new (node);
        if(i >= 0 && i <= 4)
        {
            nptr->data = tptr1->data;
            tptr1 = tptr1->next;
        }
        else
        {
            nptr->data = tptr2->data;
            tptr2 = tptr2->next;
        }
        nptr->next = NULL;
        if(fptr3 == NULL)
        {
            fptr3 = nptr;
            tptr = fptr3;
        }
        else
        {
            tptr->next = nptr;
            tptr= nptr;
        }
    }
    printnode(fptr3);
}