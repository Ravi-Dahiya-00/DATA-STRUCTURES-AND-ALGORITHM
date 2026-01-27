#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

// Insert at end in Circular LL
Node* insertEnd(Node* head, int data) {
    Node* newNode = new Node(data);

    if (head == NULL) {
        newNode->next = newNode;
        return newNode;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    return head;
}

// Delete a node with given value
Node* deleteNode(Node* head, int key) {
    if (head == NULL) return NULL;

    Node *curr = head, *prev = NULL;

    // Case 1: Deleting the head node
    if (head->data == key) {
        // Only one node
        if (head->next == head) {
            delete head;
            return NULL;
        }

        // Find last node to fix its next pointer
        Node* last = head;
        while (last->next != head)
            last = last->next;

        last->next = head->next;
        Node* del = head;
        head = head->next;
        delete del;
        return head;
    }

    // Case 2: Delete node other than head
    curr = head->next;
    prev = head;

    while (curr != head) {
        if (curr->data == key) {
            prev->next = curr->next;
            delete curr;
            return head;
        }
        prev = curr;
        curr = curr->next;
    }

    // If key not found, nothing to delete
    return head;
}

// Print Circular Linked List
void printList(Node* head) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }

    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);

    cout << endl;
}

int main() {
    Node* head = NULL;
    int n, val, del;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values: ";
    for (int i = 0; i < n; i++) {
        cin >> val;
        head = insertEnd(head, val);
    }

    cout << "Circular Linked List: ";
    printList(head);

    cout << "Enter value to delete: ";
    cin >> del;

    head = deleteNode(head, del);

    cout << "After deletion: ";
    printList(head);

    return 0;
}
