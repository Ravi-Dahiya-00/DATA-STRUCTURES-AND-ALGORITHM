#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node{
    int data;
    node* next;

    node (int data1,node* next1){
        data=data1;
        next=next1;
    }

    node (int data1){
        data=data1;
        next=NULL;
    }
};

node* arrtolinkedlist(vector<int> &arr){
    node *head=new node(arr[0]);
    node *mover=head;
    for (int i=1;i<arr.size();i++){
        node *temp= new node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;

}

void print(node* head){
    while(head!=NULL){
        cout << head->data << " ";
        head=head->next;
    }
    cout << endl;
}

node* removehead(node* head){
    if(head==NULL) return head;
    node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    node* head=arrtolinkedlist(arr);

    head=removehead(head);

    print(head);

}