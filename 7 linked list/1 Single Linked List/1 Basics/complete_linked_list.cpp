#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    Node(int data,Node* next){
        this->data=data;
        this->next=next;
    }
};

Node* arrtoll(vector<int> arr){
    int n=arr.size();
    if(n == 0) return NULL;
    Node* head=new Node(arr[0]);
    Node* temp=head;
    for(int i=1;i<n;i++){
        temp->next=new Node(arr[i]);
        temp=temp->next;
    }
    return head;
}

Node* insertk(Node* head,int k,int val){
    
    Node* newnode=new Node(val);
    if(k==1){
        if(head==NULL) return new Node(val);
        newnode->next=head;
        head=newnode;
        return head;
    }
    int count=1;
    Node* temp=head;
    while(temp!=NULL){
        if(count==k){
            Node* ahead=temp->next;
            temp->next=newnode;
            newnode->next=ahead;
            break;
        }
        count++;
        temp=temp->next;
    }
    return head;
}


void printlinkedlist(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        arr.push_back(a);
    }
    
    Node* head=arrtoll(arr);
    printlinkedlist(head);
    
    int k;
    cin>>k;
    
    int value;
    cin>>value;
    head=insertk(head,k,value);
    printlinkedlist(head);
}