#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *back;
};

void printlist(node *lptr)
{
    node *tptr;
    tptr = lptr;
    while(tptr != NULL)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->back;
    }
    cout<<endl;
}

int main()
{
    node *fptr, *tptr, *dptr, *nptr, *lptr;
    fptr = NULL;
    int i;
    for(i = 0; i < 5; i++)
    {
        nptr = new(node);
        cin>>nptr->data;
        nptr->next = NULL;
        nptr->back = NULL;
        if(fptr == NULL)
        {
            fptr = nptr;
            tptr = fptr;
        }
        else
        {
            tptr->next = nptr;
            nptr->back = tptr;
            tptr = nptr;
        }
    }
    lptr = tptr;
    printlist(lptr);
    tptr = fptr;
    int n1, n2;
    cin>>n1>>n2;
    while(tptr->data != n1)
    {
        tptr = tptr->next;
    }
    dptr = tptr->next;
    tptr->next = dptr->next;
    dptr->next->back = tptr;
    delete(dptr);
    printlist(lptr);
}