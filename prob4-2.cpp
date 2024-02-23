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
 
//Display all nodes
void display_all_nodes(){
	cout<<"The list contains the data entered:\n";
    struct Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}
 
int main(){
    insert_Node(1);
    insert_Node(3);
    insert_Node(5);
    insert_Node(7);
    insert_Node(9);
    insert_Node(11);
    display_all_nodes();
    return 0;
}