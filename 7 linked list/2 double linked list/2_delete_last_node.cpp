#include <iostream>
#include <vector>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
    }

};

Node* convertarrtodll(vector <int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for (int i=1;i<arr.size();i++){
        Node* temp=new Node{arr[i],nullptr,prev};
        prev->next=temp;
        prev=temp;
    }
    return head;
}
void print(Node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
}

Node* deletelast(Node* head){
    if(head==NULL || head->next==NULL ){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newtail=tail->back;
    newtail->next=nullptr;
    tail->back=nullptr;
    delete tail;
    return head;
}
int main(){
    // doubly linked list
    vector <int> arr={1,2,3,4,5};
    Node* head=convertarrtodll(arr);

    head=deletelast(head);
    
    print(head);

    
}