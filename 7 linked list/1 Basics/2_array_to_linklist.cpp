#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class node{
public:
    int data;
    node *next;

    node(int data1,node* next1){
        data=data1;
        next=next1;
    }

    node (int data1){
        data=data1;
        next=nullptr;
    }

   
};

node* arrtolinkedlist(vector<int> &arr){
    node* head=new node(arr[0]);                // create first node
    node* mover=head;                           // pointer to keep track of last node added
    for (int i=1;i<arr.size();i++){             
        node *temp=new node(arr[i]);             // create new node
        mover->next=temp;                        // link previous node to new one
        mover=temp;                              // move 'mover' forward
    }
    return head;                       // return address of first node (head of list)
}

int lengthofLL(node* head){
    int count=0;
    node* temp=head;
    while (temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

int checkifpresent(node* head,int val){
    node* temp=head;
    while(temp!=NULL){
        if (temp->data==val) return 1;
        temp=temp->next;
    }
    return 0;
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    node* head=arrtolinkedlist(arr);
    cout << head->data << endl;
    
       // Traverse and print
    node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    cout << "Length of linked list : " << lengthofLL(head) << endl;


    cout << "element is present in linked list : " << checkifpresent(head,4) << endl;

    cout << "element is present in linked list : " << checkifpresent(head,10) << endl;
}