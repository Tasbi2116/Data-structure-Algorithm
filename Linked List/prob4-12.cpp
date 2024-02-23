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
int main()
{
    createnode();
    printlist();
}