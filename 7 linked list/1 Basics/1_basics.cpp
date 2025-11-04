#include <iostream>
using namespace std;

/*
Here, we define a structure named Node.
Each Node represents one element (or block) of a linked list.*/
struct Node {
    int data;      // normal variable that stores the value of the node.
    Node* next;    // 👉 a pointer to another variable of type Node.

        /*
            Node* next is a pointer that can store the address of another Node.
            That’s how nodes are linked together in a linked list.*/
    
    Node (){

    }

    Node (int data1,Node *next1){
        data=data1;
        next=next1;
    }
};

int main(){
    /*
   A Linked List is a linear data structure in which elements (called nodes) are connected  
   using pointers rather than being stored in consecutive memory locations (like in arrays).

        Data → (the actual value to store)

        Pointer (or next) → a reference (address) to the next node in the list.

            */


      // Creating 2 nodes
    Node* head = new Node();
    Node* second = new Node();
 
     /*
        Node* head means we are creating a pointer of type Node.
        👉 It can store the address of a Node.
            new Node() creates a new node in heap memory and returns its address.
            That address is stored inside head.  
            
        Node* second = new Node();
        Same concept — creates another node dynamically and stores its address in second.
        
        | Variable | Meaning                                             |
        | -------- | --------------------------------------------------- |
        | `head`   | A pointer that stores the address of the first Node |
        | `*head`  | The actual Node object stored at that address       |
*/


    // Assign data
    head->data = 10;             //Go to the node that head is pointing to, and store 10 in its data part
    second->data = 20;           //assign 20 to the data part of the second node.
 
    // Connect nodes
    head->next = second;        //The next pointer of the first node (head) should store the address of the second node.
    second->next = NULL;        //NULL means the end of the list — no node comes after this.
    

    // Traverse and print
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;

    
    Node y = Node(2,NULL);
    Node z= Node(3,&y);
    
    cout << y.data << endl;
    cout << y.next << endl;

   

}

/*
| Term                | Meaning                                                    |
| ------------------- | ---------------------------------------------------------- |
| `Node`              | The structure type (blueprint for making nodes)            |
| `new Node()`        | Creates a new Node object in heap memory                   |
| `Node* head`        | A pointer variable that can store the address of a Node    |
| `head = new Node()` | Makes `head` point to the newly created Node               |
| `head->data`        | Accesses the `data` field of the Node pointed to by `head` |
*/
