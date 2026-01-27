#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=nullptr;
        right=nullptr;
    }

};

void inorder(Node* root){
     if(root==NULL) return;
     inorder(root->left);
     cout << root->data << " ";
     inorder(root->right);
}

void preorder(Node* root){
    if (root==NULL) return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root){
    if (root==NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

Node* buildtree(){
    int x;
    cin>>x;

    if (x==-1) return nullptr;

    Node* root=new Node(x);
    root->left=buildtree();
    root->right=buildtree();

    return root;
}

int main(){
    Node* root=buildtree();

    cout << "Inorder : " ;
    inorder(root);
    cout << endl;

    cout << "preorder : " ;
    preorder(root);
    cout << endl;

    cout << "Postorder : " ;
    postorder(root);

    return 0;
}