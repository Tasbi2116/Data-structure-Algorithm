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
    while(tptr != NULL)
    {
        cout<<tptr->data<<" ";
        tptr = tptr->next;
    }
    cout<<endl;    
}
int main()
{
    createnode();
    printnode();
    //deleting
    int n1, n2;
    cin>>n1>>n2;
    node *tptr, *dptr;
    tptr = fptr;
    while(tptr->data != n1)
    {
        tptr = tptr->next;
    }
    dptr = tptr->next;
    tptr->next = dptr->next;
    delete(dptr);
    printnode();
}