#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int key){
        val=key;
        left=NULL;
        right=NULL;
    }
};

TreeNode* insertnode(TreeNode* root,int key){
    if(root==NULL) return new TreeNode(key);

    else if(key<root->val){
                root->left=insertnode(root->left,key);
    }
    else{
        root->right=insertnode(root->right,key);
    }

    return root;
}

TreeNode* searchBST(TreeNode* root,int key){
    while(root!=NULL && root->val!=key){
        if(key<root->val){
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return root;
}
void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
int main(){
    
    TreeNode* root=NULL;

    root = insertnode(root,10);
    root = insertnode(root,5);
    root = insertnode(root,7);
    root = insertnode(root,20);

    root=searchBST(root,5);

    inorder(root);

    return 0;
}