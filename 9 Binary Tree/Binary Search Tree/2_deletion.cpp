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
TreeNode* insert(TreeNode* root,int key){
    
    if(root==NULL) return new TreeNode(key);

    else if (key<root->val){
        root->left=insert(root->left,key);
    }
    else {
        root->right=insert(root->right,key);
    }

    return root;
}

TreeNode* findlastright(TreeNode* root){
    if(root->right==NULL){
        return root;
    }
    return findlastright(root->right);
}

TreeNode* helper(TreeNode* root){
    if(root->left==NULL){
        return root->right;
    }
    else if(root->right==NULL){
        return root->left;
    }
    TreeNode* rightchild=root->right;
    TreeNode* lastright=findlastright(root->left);
    lastright->right=rightchild;
    return root->left;
}


TreeNode* deletenode(TreeNode* root,int key){
    if(root==NULL){
        return root;
    }
    if(root->val==key){
        return helper(root);
    }
    TreeNode* dummy=root;
    while(root!=NULL){
        if(root->val>key){
            if(root->left!=NULL && root->left->val==key){
                root->left=helper(root->left);
                break;
            }
            else{
                root=root->left;
            }
        }
        else{
            if(root->right!=NULL && root->right->val==key){
                root->right=helper(root->right);
                break;
            }
            else{
                root=root->right;
            }
        }
    }

    return dummy; 
}


void inorder(TreeNode* root){
    if(root==NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
};
int main(){
     
    TreeNode* root=NULL;

    root = insert(root,10);
    root = insert(root,5);
    root = insert(root,20);
    root = insert(root,40);
    root = insert(root,25);
    root = insert(root,30);

    root=deletenode(root,10);
    inorder(root);
    return 0;
}