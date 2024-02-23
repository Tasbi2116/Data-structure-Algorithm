#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
int main()
{
    node *nptr, *tptr, *fptr = NULL, *eptr;
    for(int i = 0; i < 5; i++)
    {
        nptr = new (node);
        cin>>nptr->data;
        nptr->next = NULL;
        if(fptr == NULL)
        {
            fptr = nptr;
            tptr = fptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }
    }
    //display
    eptr = fptr;
    for(int i = 0; i < 5;i++)
    {
        if(eptr != NULL)
        {
            cout<<eptr->data<<" ";
            eptr = eptr->next;
        }
    }

}