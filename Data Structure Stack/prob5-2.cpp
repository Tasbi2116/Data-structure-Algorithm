#include <iostream>

using namespace std;

class Node {
public:
    int data; // data stored in the node
    Node* next; // pointer to the next node

    Node(int d) {
        data = d;
        next = nullptr;
    }
};

class Stack {
private:
    Node* top; // pointer to the top node

public:
    Stack() {
        top = nullptr; // initialize top to nullptr to indicate empty stack
    }

    void push(int x) {
        Node* newNode = new Node(x); // create a new node
        newNode->next = top; // link the new node to the top node
        top = newNode; // set the new node as the top node
    }

    void pop() {
        if (top == nullptr) { // check if stack is empty
            cout << "Stack Underflow" << endl;
            return;
        }
        Node* temp = top; // store the top node in a temporary variable
        top = top->next; // set the next node as the top node
        delete temp; // free the memory of the top node
    }

    int peek() {
        if (top == nullptr) { // check if stack is empty
            cout << "Stack is empty" << endl;
            return -1;
        }
        return top->data; // return the data of the top node
    }

    bool isEmpty() {
        return top == nullptr; // check if stack is empty
    }
};

int main() {
    Stack s;
    int arr[] = { 1, 2, 3, 4, 5 }; // integer array in ascending order
    int n = sizeof(arr) / sizeof(arr[0]); // size of array

    // add elements to stack in ascending order
    for (int i = 0; i < n; i++) {
        s.push(arr[i]);
    }

    // print elements of stack in descending order
    while (!s.isEmpty()) {
        cout << s.peek() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}
