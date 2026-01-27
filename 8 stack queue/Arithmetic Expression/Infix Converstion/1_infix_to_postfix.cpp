#include <iostream>
#include <stack>
#include <string>
using namespace std;

// function to define precedence of operators

// A+B*C-D

int precedence(char c) {
    if(c == '^') return 3;
    if(c == '*' || c == '/') return 2;
    if(c == '+' || c == '-') return 1;
    return 0;
}

string infixToPostfix(string s) {
    stack<char> st;
    string ans = "";

    for(char ch : s) {

        // 1. If operand, append to output
        if(isalnum(ch)) { 
            ans += ch; 
        }

        // 2. If '(', push to stack
        else if(ch == '(') { 
            st.push(ch); 
        }

        // 3. If ')', pop until '('
        else if(ch == ')') {
            while(!st.empty() && st.top() != '(') {
                ans += st.top();
                st.pop();
            }
            st.pop(); // remove '('
        }

        // 4. Operator: + - * / ^
        else {
            while(!st.empty() && precedence(st.top()) >= precedence(ch)) {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    // Pop remaining operators
    while(!st.empty()) {
        ans += st.top();
        st.pop();
    }

    return ans;
}

int main() {
    string exp;
    cin >> exp;
    cout << infixToPostfix(exp);
}
