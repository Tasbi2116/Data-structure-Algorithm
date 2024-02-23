#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *back;
};

node *fptr, *lptr;
void createnode()
{
    node  *tptr, *nptr;
    fptr = NULL;
    for(int i = 0; i < 10; i++)
    {
        nptr = new(node);
        cin>>nptr->data;
        nptr->next = NULL;
        nptr->back = NULL;
        if(fptr == NULL)
        {
            fptr = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            nptr->back = tptr;
            tptr = nptr;
        }
    }
    lptr = tptr;
}

void printlist()
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

void deletenode(char x)
{
    node *tptr, *dptr;
    tptr = fptr;
    if(x == 'f')
    {
        dptr = fptr;
        fptr = fptr->next;
        fptr->back = NULL;
        delete(dptr);
    }
    else if(x == 'e')
    {
        dptr = lptr;
        lptr = lptr->back;
        lptr->next = NULL;
        delete(dptr);
    }
    else
    {
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
    }
}

int main()
{
    createnode();
    printlist();
    deletenode('f');
    printlist();
    deletenode('e');
    printlist();
    deletenode('m');
    printlist();
}