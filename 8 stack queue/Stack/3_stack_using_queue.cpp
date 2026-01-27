#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q;

public:


    void push(int x) {
        q.push(x);
        
        int size = q.size();
        for (int i = 0; i < size - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        if (q.empty())
            return -1;

        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        if (q.empty())
            return -1;
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);

    cout << s.pop() << " ";  
    cout << s.top() << " ";  
}
