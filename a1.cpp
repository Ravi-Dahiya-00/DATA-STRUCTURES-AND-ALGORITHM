#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

// Append at Left (Beginning)
void appendLeft(Node** head, int val) {
    Node* temp = new Node;
    temp->val = val;
    temp->next = *head;
    *head = temp;
}

// Append at Right (End)
void appendRight(Node** head, int val) {
    Node* newnode = new Node;
    newnode->val = val;
    newnode->next = nullptr;

    // If list is empty
    if (*head == nullptr) {
        *head = newnode;
        return;
    }

    // Traverse till last node
    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    // Attach new node
    temp->next = newnode;
}

// Print Linked List
void print(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* myList = nullptr;
    int choice, val;

    do {
        cout << "\n1. Append Left\n2. Append Right\n3. Print List\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> val;
                appendLeft(&myList, val);
                break;

            case 2:
                cout << "Enter value: ";
                cin >> val;
                appendRight(&myList, val);
                break;

            case 3:
                cout << "Linked List: ";
                print(myList);
                break;

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 4);

    return 0;
}
