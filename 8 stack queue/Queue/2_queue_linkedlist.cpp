#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

struct Queue {
    Node* front;
    Node* rear;

    Queue() {
        front = rear = NULL;
    }
};

// Insert element into queue
void enqueue(Queue &q, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if (q.rear == NULL) {      
        q.front = q.rear = newNode;
        return;
    }

    q.rear->next = newNode;
    q.rear = newNode;
}

// Remove element from queue
int dequeue(Queue &q) {
    if (q.front == NULL) {
        cout << "Queue is empty\n";
        return -1;
    }

    Node* temp = q.front;
    int removed = temp->data;

    q.front = q.front->next;

    if (q.front == NULL)
        q.rear = NULL;

    delete temp;
    return removed;
}

// Return front element
int peek(Queue &q) {
    if (q.front == NULL) {
        cout << "Queue is empty\n";
        return -1;
    }
    return q.front->data;
}

// Check if queue is empty
bool isEmpty(Queue &q) {
    return q.front == NULL;
}

// Display queue
void display(Queue &q) {
    Node* temp = q.front;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Queue q;

    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);
    enqueue(q, 40);

    cout << "Queue: ";
    display(q);

    cout << "Dequeued: " << dequeue(q) << endl;
    cout << "Queue after dequeue: ";
    display(q);

    cout << "Front element: " << peek(q) << endl;

    return 0;
}
