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

void NodeInsertatBegin(int new_element) {
  
  // Create a new node
  Node* new_Node = new Node();
  new_Node->data = new_element;
  new_Node->link = head;
  head = new_Node;   
}

//Display all nodes
void display_all_nodes()
  {
	struct Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
  }
 
int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    insert_Node(13);
    cout<<"Original Linked list:\n";
	display_all_nodes();
	cout<<"\n\nInsert a new node at the beginning of a Singly Linked List:\n";
    NodeInsertatBegin(0);
    display_all_nodes();
    cout<<endl;
    return 0;
}