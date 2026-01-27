#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node* root){
    if(root==NULL) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if (root==NULL) return ans;
        queue <Node*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int> level;
            for(int i=0;i<size;i++){
                Node* node=q.front();
                q.pop();
                if(node->left!=NULL) q.push(node->left);
                if(node->right!=NULL) q.push(node->right);
                level.push_back(node->data);
            }
            ans.push_back(level);
        }
        return ans;
    }



Node* insert(Node* root,int key){
    
    if(root==NULL) return new Node(key);

    else if (key<root->data){
        root->left=insert(root->left,key);
    }
    else {
        root->right=insert(root->right,key);
    }

    return root;
}

int main(){
    
    Node* root=NULL;

    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,7);
    root = insert(root,20);

    inorder(root);
    return 0;
}