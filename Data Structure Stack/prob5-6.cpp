#include <iostream>
#include <stack>
#include <string>

using namespace std;

int get_precedence(char c) {
    if (c == '+' || c == '-') 
    {
        return 1;
    } else if (c == '*' || c == '/') 
    {
        return 2;
    } else if (c == '^') 
    {
        return 3;
    } else 
    {
        return 0;
    }
}

string infix_to_postfix(string expression) {
    stack<char> st;
    string postfix = "";
    for (int i = 0; i < expression.length(); i++) {
        char c = expression[i];
        if (c >= '0' && c <= '9') {
            postfix += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            if (!st.empty() && st.top() == '(') {
                st.pop();
            }
        } else {
            while (!st.empty() && get_precedence(c) <= get_precedence(st.top())) {
                postfix += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int evaluate_postfix(string postfix) {
    stack<int> st;
    for (int i = 0; i < postfix.length(); i++) 
    {
        char c = postfix[i];
        if (c >= '0' && c <= '9') 
        {
            st.push(c - '0');
        } 
        else 
        {
            int operand2 = st.top();
            st.pop();
            int operand1 = st.top();
            st.pop();
            switch (c) {
                case '+':
                    st.push(operand1 + operand2);
                    break;
                case '-':
                    st.push(operand1 - operand2);
                    break;
                case '*':
                    st.push(operand1 * operand2);
                    break;
                case '/':
                    st.push(operand1 / operand2);
                    break;
            }
        }
    }
    return st.top();
}

int main() {
    string expression;
    cout << "Enter an arithmetic expression: ";
    getline(cin, expression);
    string postfix = infix_to_postfix(expression);
    cout << "Postfix notation: " << postfix << endl;
    int result = evaluate_postfix(postfix);
    cout << "Result: " << result << endl;
    return 0;
}
