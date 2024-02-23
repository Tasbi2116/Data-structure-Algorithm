#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next, *back;
};

int main()
{
    node *nptr, *fptr, *tptr;
    fptr = NULL;
    int i = 0;
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
    tptr = fptr;
    while(tptr != NULL)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->next;
    }
    cout<<endl;
    tptr = fptr;
    while(tptr->next != NULL)
    {
        tptr = tptr->next;
    }
    while(tptr != NULL)
    {
        cout<<tptr->data<<" ";
        tptr= tptr->back;
    }
    cout<<endl;
}