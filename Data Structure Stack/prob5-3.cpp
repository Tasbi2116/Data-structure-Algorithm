#include <iostream>
#include <cstring>

using namespace std;

const int MAX_SIZE = 100; // maximum size of stack

class Stack {
private:
    char arr[MAX_SIZE]; // character array to store stack elements
    int top; // index of the top element in the stack

public:
    Stack() {
        top = -1; // initialize top to -1 to indicate empty stack
    }

    void push(char c) {
        if (top == MAX_SIZE - 1) { // check if stack is full
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = c; // increment top and add the character to the stack
    }

    void pop() {
        if (top == -1) { // check if stack is empty
            cout << "Stack Underflow" << endl;
            return;
        }
        top--; // decrement top to remove the top element from the stack
    }

    char peek() {
        if (top == -1) { // check if stack is empty
            cout << "Stack is empty" << endl;
            return '\0';
        }
        return arr[top]; // return the top element of the stack
    }

    bool isEmpty() {
        return top == -1; // check if stack is empty
    }
};

int main() {
    Stack s;
    char str[] = "Hello World!"; // character array to add to the stack

    // add characters to stack
    for (int i = 0; i < strlen(str); i++) {
        s.push(str[i]);
    }

    // print characters in reverse order
    while (!s.isEmpty()) {
        cout << s.peek();
        s.pop();
    }
    cout << endl;

    return 0;
}
