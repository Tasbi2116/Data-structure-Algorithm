#include <iostream>

using namespace std;

struct  Node
{   
    int data;
    Node *next;
};

  
  void insert(Node** head, int data){
    int size = 0;
    Node* new_Node = new Node();
    new_Node->data = data;
    new_Node->next = *head;
    *head = new_Node;    
     size++;
}

void insert_middle(Node** head, int data){
    
    Node* new_Node = new Node();
    new_Node->data = data;
    int size = 0;
    if(*head == NULL){
        new_Node->data = data;
        new_Node->next = *head;
        *head = new_Node;
        size++;
        return;
    }

    Node* temp = *head;
    // Find insertion position for middle
    int mid = (size % 2 == 0) ? (size/2) : (size+1)/2;    
    while(--mid){
        temp = temp->next;
    }    
    new_Node->next = temp->next;
    temp->next = new_Node;
    size++;
    
}

  //Display all nodes
  void display_all_nodes(Node* node)
    { 
      while(node!=NULL){
        cout << node->data << " "; 
        node = node->next; 
    } 
}

int main()
{
    Node* head = NULL;

    insert(&head,1);
    insert(&head,3);
	insert(&head,5);
	insert(&head,7);
    cout << "Original list:\n";
    display_all_nodes(head); 
    cout << "\nSingly Linked List: after insert 9 in the middle of the said list-\n";
    insert_middle(&head, 9);
    display_all_nodes(head); 
    cout << "\nSingly Linked List: after insert 11 in the middle of the said list-\n";
    insert_middle(&head, 11);
    display_all_nodes(head); 
    cout << "\nSingly Linked List: after insert 13 in the middle of the said list-\n";
    insert_middle(&head, 13);
    display_all_nodes(head); 
    cout<<endl;
    return 0;

}