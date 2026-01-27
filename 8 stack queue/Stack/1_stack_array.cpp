#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];     // fixed size stack
    int top;

public:
    Stack() {
        top = -1;
    } 

    // Insert element
    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = x;
    }

    // Remove element
    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }

    // Return top element
    int peek() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

    // Check empty
    bool isEmpty() {
        return top == -1;
    }

    // Check full
    bool isFull() {
        return top == 99;
    }

    // Return size
    int size() {
        return top + 1;
    }

    // Display stack
    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    cout << "Top element: " << st.peek() << endl;

    st.pop();
    cout << "After pop, top: " << st.peek() << endl;

    cout << "Stack size: " << st.size() << endl;

    return 0;
}
