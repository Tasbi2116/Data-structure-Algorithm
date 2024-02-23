#include <iostream>

using namespace std;

struct Node
{   
    int num;
    Node *next;
 }; //node constructed

  
  void insert(Node** head, int num){
    int size = 0;
    Node* new_Node = new Node();
    new_Node->num = num;
    new_Node->next = *head;
    *head = new_Node;    
     size++;
}

Node* get_Middle(Node* head) {
    
    // Base cases 
    if (head == NULL) 
        return NULL; 
    if (head->next == NULL) 
    { 
        delete head; 
        return NULL; 
    } 
      // Set up slow and fast pointers in order 
	  // to reach the middle of the linked list 
    Node* slow_ptr = head; 
    Node* fast_ptr = head; 
  
    // Find the middle and previous of middle. 
    Node* prev; // To store previous of slow_ptr 
    while (fast_ptr != NULL && fast_ptr->next != NULL) 
    { 
        fast_ptr = fast_ptr->next->next; 
        prev = slow_ptr; 
        slow_ptr = slow_ptr->next; 
    } 
     //Delete the middle node 
    prev->next = slow_ptr->next; 
    delete slow_ptr; 
    return head;
    
}

  //Display all nodes
  void display_all_nodes(Node* node)
    { 
      while(node!=NULL){
        cout << node->num << " "; 
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
    insert(&head,9);
    cout << "Original list:\n";
    display_all_nodes(head); 
    cout << "\nAfter removing the middle element of the said list:\n";
    Node* result = get_Middle(head);
    display_all_nodes(result);
	cout << "\nAfter removing the middle element of the said list:\n";
    result = get_Middle(head);
    display_all_nodes(result); 
    cout << "\nAfter removing the middle element of the said list:\n";
    result = get_Middle(head);
    display_all_nodes(result); 
    cout << "\nAfter removing the middle element of the said list:\n";
    result = get_Middle(head);
    display_all_nodes(result); 
    cout<<endl;
    return 0;
}