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

node* insertatk(node* head,int val,int k){
     // Case 1: Insert at beginning
    if(k == 1){
        node* newnode = new node(val);
        newnode->next = head;
        return newnode;
    }

    node* temp = head;
    int count = 1;

    // Move to (k-1)th node
    while(temp != NULL && count < k - 1){
        temp = temp->next;
        count++;
    }

    // If position invalid
    if(temp == NULL) return head;

    // Insert node
    node* newnode = new node(val);
    newnode->next = temp->next;
    temp->next = newnode;

    return head;

    
}

int main(){
    vector<int> arr={1,2,3,4,5,6};
    node* head=arrtolinkedlist(arr);

    int n;
    cout << "Enter value to insert at end : ";
    cin>>n;
    int k;
    cout << "Enter the index to insert:";
    cin>>k;

    head=insertatk(head,n,k);

    print(head);

}