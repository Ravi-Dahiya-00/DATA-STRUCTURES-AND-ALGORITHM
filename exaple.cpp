#include <iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};


void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void findMiddle(Node* head) {
    if (head == nullptr) {
        cout << "The list is empty!" << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    // Move fast by 2 and slow by 1 step
    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << "Middle element is: " << slow->data << endl;
}


void display(Node* head) {
    Node* temp = head;
    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

   
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);
    insertAtEnd(head, 50);

    display(head);
    findMiddle(head);

    return 0;
}
