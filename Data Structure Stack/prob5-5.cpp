#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool is_valid_expression(string expression) {
    stack<char> st;
    bool is_valid = true;
    for (int i = 0; i < expression.length(); i++) 
    {
        char c = expression[i];
        if (c == '(' || c == '{' || c == '[') 
        {
            st.push(c);
        } 
        else if (c == ')' || c == '}' || c == ']') 
        {
            if (st.empty()) 
            {
                is_valid = false;
                cout << "Invalid expression: Unmatched " << c << " at index " << i << endl;
                break;
            } 
            else 
            {
                char top = st.top();
                st.pop();
                if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '[')) {
                    is_valid = false;
                    cout << "Invalid expression: Mismatched " << top << " and " << c << " at index " << i << endl;
                    break;
                }
            }
        }
    }
    if (is_valid && !st.empty()) {
        is_valid = false;
        char unmatched = st.top();
        st.pop();
        cout << "Invalid expression: Unmatched " << unmatched << " at end of expression" << endl;
    }
    return is_valid;
}

int main() {
    string expression;
    cout << "Enter a mathematical expression: ";
    getline(cin, expression);
    if (is_valid_expression(expression)) {
        cout << "Valid expression" << endl;
    }
    return 0;
}
