 #include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> s1, s2;

public:
    void enqueue(int x) {
        // push into first stack
        s1.push(x);
    }

    int dequeue() {
        if (s1.empty() && s2.empty()) {
            return -1;
        }

        // move elements from s1 to s2 only when s2 is empty
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }

        int val = s2.top();
        s2.pop();
        return val;
    }

    int front() {
        if (s1.empty() && s2.empty())
            return -1;

        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << q.dequeue() << " ";  
    cout << q.front() << " ";    
    cout << q.dequeue() << " ";  

    return 0;
}
