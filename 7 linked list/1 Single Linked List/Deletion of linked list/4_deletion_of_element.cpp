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
node* deleteel(node* head,int k){
    if(head==NULL) return head;

    if (head->data==k){
        node *temp=head;
        head=head->next;
        delete temp;
        return head;
    }

    node*temp=head;
    node* prev=NULL;

    while(temp!=NULL){
         if(temp->data==k){
            prev->next=prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;
}

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

int main(){
    vector<int> arr={1,2,3,4,5,6};

    int k;
    cout << "Enter K : " << endl;
    cin>>k;
    node* head=arrtolinkedlist(arr);

    
    head=deleteel(head,k);

    print(head);

    return 0;
}