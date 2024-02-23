
Intersection of Two Linked Lists in C++
C++Server Side ProgrammingProgramming
A Linked List is a linear data structure in which each node has two blocks such that one block contains the value or data of the node and the other block contains the address of the next field.

Let us assume that we have a linked list such that each node contains a random pointer which is pointing to the other nodes in the list. The task is to find the node at which two linked lists intersect each other. If they don't intersect, then return NULL or empty as output.

For Example

Input-1:

             

Output:

2
Explanation: Since the given linked list intersects at the node with the value '2', we will return the value '2' as the output.

Input-2:


Output:

NULL
Explanation: Since there are no common points, we will return NULL in this case.

Approach to Solve this Problem
We have two linked lists with a common point where they intersect each other. To find the intersection point, we will traverse both the linked lists till we find that they are equally pointing to the same value. At some point, the pointer to the next node of the linked list will be the same. Thus we will return the value of that point.

Take two linked lists with data and pointer to the next node.
A function commonPoint(listnode*headA, listnode*headB) takes two pointers of linked list respectively and returns the value of the common or intersection point of the linked list.
An integer function that finds the length of the linked list will return the length of both linked lists from the head of the list.
Now create a pointer to the head of both lists and traverse the list which is greater in its length till (length of first list – length of second list).
Now traverse the list till we find the next pointer is equal.
Return the value of that particular node where both the lists intersect.
Example
Live Demo

#include <bits/stdc++.h>
using namespace std;
class listnode {
   public:
      int data;
   listnode * next;
};
// Find the length of the linked list
int count(listnode * head) {
   int count = 0;
   while (head != NULL) {
      count++;
      head = head -> next;
   }
   return count;
}
//Function to get the common point of two linked list
int commonPoint(listnode * headA, listnode * headB) {
   int len1 = count(headA);
   int len2 = count(headB);
   listnode * p1 = headA;
   listnode * p2 = headB;
   if (len1 > len2) {
      for (int i = 0; i < len1 - len2; ++i) {
         p1 = p1 -> next;
      }
   }
   if (len1 < len2) {
      for (int i = 0; i < len2 - len1; ++i) {
         p2 = p2 -> next;
      }
   }
   while (p1 != NULL and p2 != NULL) {
      if (p1 == p2) {
         return p1 -> data;
      }
      p1 = p1 -> next;
      p2 = p2 -> next;
   }
   return -1;
}
int main() {
   listnode * head;
   listnode * headA = new listnode();
   headA -> data = 5;
   listnode * headB = new listnode();
   headB -> data = 4;
   head = new listnode();
   head -> data = 9;
   headB -> next = head;
   head = new listnode();
   head -> data = 2;
   headB -> next -> next = head;
   head = new listnode();
   head -> data = 7;
   headA -> next = head;
   headB -> next -> next -> next = head;
   head = new listnode();
   head -> data = 3;
   headA -> next -> next = head;
   headA -> next -> next -> next = NULL;
   cout << commonPoint(headA, headB) << endl;
}