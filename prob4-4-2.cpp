#include <iostream>
 
using namespace std;
 
//Declare node 
struct Node{
    int data;
    Node *link;
};
 
//Starting (Head) node
struct Node *head=NULL;
 
//Insert node at start
void insert_Node(int n){
    struct Node *new_node=new Node;
    new_node->data=n;
    new_node->link=head;
    head=new_node;
}

void InsertEnd(int newElement) 
{
  Node* new_Node = new Node();
  new_Node->data = newElement;
  new_Node->link = NULL; 
  if(head == NULL) 
  {
    head = new_Node;
  } 
  else 
  {    
    Node* temp = head;
    while(temp->link != NULL)
    {
      temp = temp->link;
    temp->link = new_Node;
    }
  }    
}

//Display all nodes
void display_all_nodes()
  {
	struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    }
 
int main(){
    insert_Node(1);
    insert_Node(2);
    insert_Node(3);
    insert_Node(4);
    insert_Node(5);
    insert_Node(6);
    insert_Node(7);
    cout<<"Original Linked list:\n";
	display_all_nodes();
	cout<<"\n\nInsert a new node at the end of a Singly Linked List:\n";
    InsertEnd(3);
    display_all_nodes();
    cout<<endl;
    return 0;
}