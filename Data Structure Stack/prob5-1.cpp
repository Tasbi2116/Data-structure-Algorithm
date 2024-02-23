#include <iostream>

using namespace std;

const int MAX_SIZE = 100; // maximum size of stack

class Stack {
private:
    int top; // index of top element
    int arr[MAX_SIZE]; // array to store elements

public:
    Stack() {
        top = -1; // initialize top to -1 to indicate empty stack
    }

    void push(int x) {
        if (top == MAX_SIZE - 1) { // check if stack is full
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x; // increment top and add element to stack
    }

    void pop() {
        if (top == -1) { // check if stack is empty
            cout << "Stack Underflow" << endl;
            return;
        }
        top--; // decrement top to remove element from stack
    }

    int peek() {
        if (top == -1) { // check if stack is empty
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top]; // return top element
    }

    bool isEmpty() {
        return top == -1; // check if stack is empty
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
