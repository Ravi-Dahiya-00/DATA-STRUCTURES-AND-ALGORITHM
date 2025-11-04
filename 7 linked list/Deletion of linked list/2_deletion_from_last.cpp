#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class node{
public:
    int data;
    node* next;

    node(int data1,node* next1){
        data=data1;
        next=next1;
    }

    node(int data1){
        data=data1;
        next=NULL;
    }
};

node* arrtolinkedlist(vector<int> &arr){
    node* head=new node(arr[0]);
    node *mover=head;
    for (int i=1;i<arr.size();i++){
        node* temp=new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}

node *removelast(node* head){
    if (head==NULL || head->next==NULL) return NULL;
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=NULL;
    return head;
}

void print(node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}
int main(){
    vector<int> arr={1,2,3,4,5,6};
    node* head=arrtolinkedlist(arr);

    head=removelast(head);

    print(head);


}