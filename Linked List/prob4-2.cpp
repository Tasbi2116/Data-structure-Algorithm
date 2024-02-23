#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
node *fptr;
void createnode ()
{
    node *tptr, *nptr;
    fptr = NULL;
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
            tptr= nptr;
        }
    }
}
void printnode()
{
    node *tptr;
    tptr = fptr;
    for(int i = 0; i < 5;i++)
    {
        if(tptr != NULL)
        {
            cout<<tptr->data<<" ";
            tptr = tptr->next;
        }
    }
}
int main()
{
    createnode();
    printnode();
}