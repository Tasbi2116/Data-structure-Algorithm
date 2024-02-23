#include<bits/stdc++.h>
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
}

void addNode(char x)
{
    node *tptr, *nptr;
    tptr = fptr;
    nptr = new (node);
    cin>>nptr->data;
    nptr->next = NULL;
    char pos = x;
    if(pos == 'F')
    {
        nptr->next = fptr;
        fptr = nptr;
    }
    else if(pos == 'E')
    {
        while(tptr->next != NULL)
        {
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
}

int main()
{
    createnode();
    printnode();
    char ch;
    cin>>ch;
    addNode(ch);
    printnode();
    cin>>ch;
    addNode(ch);
    printnode();

}