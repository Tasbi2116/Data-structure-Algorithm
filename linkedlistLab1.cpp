
// C++ program to get intersection point of two linked list
#include <bits/stdc++.h>
using namespace std;
  
 
class Node 
{
    public:
    int data;
    Node* next;
};
  

int getCount(Node* head);
int _getIntesectionNode(int d, Node* head1, Node* head2);
  

int getIntesectionNode(Node* head1, Node* head2)
{

    int c1 = getCount(head1);
    int c2 = getCount(head2);
    int d;
  
    // If first is greater
    if (c1 > c2) 
    {
        d = c1 - c2;
        return _getIntesectionNode(d, head1,head2);
    }
    else 
    {
        d = c2 - c1;
        return _getIntesectionNode(d, head2, head1);
    }
}
  

int _getIntesectionNode(int d, Node* head1, Node* head2)
{

    Node* current1 = head1;
    Node* current2 = head2;
  
    
    for (int i = 0; i < d; i++) 
    {
        if (current1 == NULL) 
        {
            return -1;
        }
        current1 = current1->next;
    }
  

    while (current1 != NULL && 
           current2 != NULL) 
    {
        if (current1 == current2)
            return current1->data;
  
       
        current1 = current1->next;
        current2 = current2->next;
    }
  
    return -1;
}

int getCount(Node* head)
{
    Node* current = head;
  
    
    int count = 0;
  
    
    while (current != NULL) 
    {
        
        count++;
        current = current->next;
    }
  
    return count;
}
  
// Driver Code
int main()
{
    /*     
        1st 1->2->3->4 
        2nd 5->3->4     
        15 is the intersection point */

        /*int size1, size2;
        cout << "Enter the size for linked list 1;";
        cin >> size1;
        cout << "Enter the size for linked list 1;";
        cin >> size1;

        Node* newNode;
        Node * head1 = new Node();

        Node* newNode;
        Node * head2 = new Node();

        for (int i = 1; i<size1; i++){
            Node* newNode;
            newNode = new Node();
            Node * head1 = new Node();
            cout << "Enter the data for linked list 1;";
            cin >> head1 -> data ;
        }
        
        for (int i = 1; i<size2; i++){
            Node* newNode;
            Node * head2 = new Node();
            cout << "Enter the data for linked list 2;";
            cin >> head2 -> data ;
        }
    cout << "The node of intersection is " << getIntesectionNode(head1, head2); */
    
    Node* head1 = new Node();
    head1->data = 5;
  
    Node* head2 = new Node();
    head2->data = 1;
  
    newNode = new Node();
    newNode->data = 2;
    head2->next = newNode;
  
    newNode = new Node();
    newNode->data = 4;
    head2->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 3;
    head1->next = newNode;
    head2->next->next->next = newNode;
  
    newNode = new Node();
    newNode->data = 4;
    head1->next->next = newNode;
  
    head1->next->next->next = NULL;
  
    cout << "The node of intersection is " << getIntesectionNode(head1, head2);

}
