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
    for(int i = 0; i < 5; i++)
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

void nodeadd(char x)
{
    node  *tptr, *nptr;
    tptr = fptr;
    nptr = new(node);
    cin>>nptr->data;
    nptr->next = NULL;
    nptr->back = NULL;
    if(x == 'F')
    {
        nptr->next = tptr;
        tptr->back = nptr;
        fptr = nptr;
    }
    else if(x == 'E')
    {
        lptr->next = nptr;
        nptr->back = lptr;
        lptr = nptr;
    }
    else
    {
        tptr = fptr;
        int n1,n2;
        cin>>n1>>n2;
        while(tptr->data != n1)
        {
            tptr = tptr->next;
        }
        //cout<<tptr->data;
        nptr->back = tptr;
        nptr->next = tptr->next;
        tptr->next->back = nptr;
        tptr->next = nptr;
    }
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

int main()
{
    createnode();
    printlist();
    nodeadd('F');
    printlist();
    nodeadd('E');
    printlist();
    nodeadd('M');
    printlist();
}
