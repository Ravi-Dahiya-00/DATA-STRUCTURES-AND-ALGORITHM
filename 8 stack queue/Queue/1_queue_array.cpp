#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];   // fixed size queue
    int start;
    int end;
    int count;

public:
    Queue() {
        start = 0;
        end = -1;
        count = 0;
    }

    // Insert element (enqueue)
    void enqueue(int x) {
        if (count == 100) {
            cout << "Queue Overflow" << endl;
            return;
        }
        end = (end + 1) % 100;
        arr[end] = x;
        count++;
    }

    // Remove element (dequeue)
    void dequeue() {
        if (count == 0) {
            cout << "Queue Underflow" << endl;
            return;
        }
        start = (start + 1) % 100;
        count--;
    }

    // Get start element
    int getstart() {
        if (count == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[start];
    }

    // Check if empty
    bool isEmpty() {
        return count == 0;
    }

    // Check if full
    bool isFull() {
        return count == 100;
    }

    // Return size
    int size() {
        return count;
    }

    // Display queue
    void display() {
        if (count == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        for (int i = 0; i < count; i++) {
            int index = (start + i) % 100;
            cout << arr[index] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.display();

    cout << "start element: " << q.getstart() << endl;

    q.dequeue();
    cout << "After dequeue, start: " << q.getstart() << endl;

    cout << "Queue size: " << q.size() << endl;

    return 0;
}
