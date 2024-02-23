#include <iostream>

using namespace std;

struct  Node
{   
    int num;
    Node *next;
 }; //node constructed

  int size = 0;
  void insert(Node** head, int num){
    Node* new_Node = new Node();
    new_Node->num = num;
    new_Node->next = *head;
    *head = new_Node;    
     size++;
}

Node* delete_last_node(struct Node* head)
{
    if (head == NULL)
        return NULL;
 
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
 
    // Locate the second last node
    Node* second_last_node = head;
    while (second_last_node->next->next != NULL)
        second_last_node = second_last_node->next;
 
    // Remove the last node from the list
    delete (second_last_node->next);
 
    // Change the next to the second last  
    second_last_node->next = NULL;
 
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
    cout << "Original list:\n";
    display_all_nodes(head); 
    cout << "\n\nRemove the last node of the said list:";
    cout << "\nUpdated list:\n";
    head = delete_last_node(head);
    display_all_nodes(head); 
    cout << "\n\nAgain remove the last node of the said list:";
    cout << "\nUpdated list:\n";
    head = delete_last_node(head);
    display_all_nodes(head); 
    cout<<endl;
    return 0;
}