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
    if(head==NULL){
        if(k==1){
            return new node(val);
        }
    }

    if (k==1){
        node *temp=new node(val,head);
        return temp;
    }

    int count=0;
    node *temp=head;
    while(temp!=NULL){
        count++;
        if(count==(k-1)){
            node *next1=temp->next->next;
            node *newnode=new node(val);
            temp->next=newnode;
            newnode->next=next1;

             // node *x = new node(val);
            // x->next = temp->next;
            // temp->next = x;
            
            break;

            // both works fine
        }
        temp=temp->next;

       
    }

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