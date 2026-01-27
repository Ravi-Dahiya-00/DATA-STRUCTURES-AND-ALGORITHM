#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int data1){
        data=data1;
        next=NULL;
    }
};

void insertnode(Node* &tail,int element,int d){
    if(tail==NULL){
        Node* newnode=new Node(d);
        tail=newnode;
        newnode->next=newnode;
    }

    else {
        Node* curr=tail;
        
        while(curr->data!=element){
            curr=curr->next;
        }

        Node* temp=new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
}

void* print(Node* tail){
       if (tail == NULL) return NULL;

    Node* temp = tail;

    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail);
     cout << endl;
}
int main(){
    
    Node* tail=NULL;
    insertnode(tail,5,3);
    print(tail);

    insertnode(tail,3,4);
    print(tail);

    insertnode(tail,4,5);
    print(tail);

    insertnode(tail,5,6);
    print(tail);
}