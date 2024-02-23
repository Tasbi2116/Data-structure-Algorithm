#include <bits/stdc++.h>

using namespace std;
class node {
   public:
      int data;
   node * next;
};

int count(node * head) {
   int count = 0;
   while (head != NULL) {
      count++;
      head = head -> next;
   }
   return count;
}


int Intersection(node * headA, node * headB) {
   int len1 = count(headA);
   int len2 = count(headB);
   node * p1 = headA;
   node * p2 = headB;
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
   node * head;
   node * headA = new node();
   headA -> data = 5;
   node * headB = new node();
   headB -> data = 4;
   head = new node();
   head -> data = 9;
   headB -> next = head;
   head = new node();
   head -> data = 2;
   headB -> next -> next = head;
   head = new node();
   head -> data = 7;
   headA -> next = head;
   headB -> next -> next -> next = head;
   head = new node();
   head -> data = 3;
   headA -> next -> next = head;
   headA -> next -> next -> next = NULL;
   cout << Intersection(headA, headB) << endl;
}