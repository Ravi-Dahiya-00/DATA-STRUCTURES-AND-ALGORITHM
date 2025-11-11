#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node (int data1,Node* next1,Node* back1){
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

Node* convertarrtodll(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* prev=head;
    for (int i=1;i<arr.size();i++){
        Node* temp=new Node{arr[i],nullptr,prev};
        prev->next=temp;
        prev=temp;
    }
    return head;
}


Node* deletehead(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node *prev=head;
    head=head->next;
    head->back=NULL;
    prev->next=NULL;
    delete prev;
    return head;
}

Node* deletetail(Node* head){
    if(head==NULL || head->next==NULL){
        return NULL;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    Node* newtail=tail->back;
    newtail->next=nullptr;
    tail->next=nullptr;
    delete tail;
    return head;
}

Node* deletek(Node* head,int k){
    Node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k) break;
        temp=temp->next;
    } 

    Node* prev=temp->back;
    Node* front=temp->next;

    if(prev==NULL && front==NULL){
        delete temp;
        return NULL;
    }
    else if(prev==NULL){
        return deletehead(head);
    }
    else if (front==NULL){
        return deletetail(head);
    }

    prev->next=front;
    front->back=prev;

    temp->next=nullptr;
    temp->back=nullptr;
    delete temp;
    return head;
}

void print(Node* head){
    while(head!=NULL){
        cout<< head->data << endl;
        head=head->next;
    }
}

int main(){
    vector <int> arr={1,2,3,4,5};
    Node* head=convertarrtodll(arr);

    int k;
    cout << "enter k : ";
    cin>>k;
    head=deletek(head,k);

    print(head);
}
