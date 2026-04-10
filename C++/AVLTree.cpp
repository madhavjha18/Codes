#include<bits/stdc++.h>

using namespace std;

class Node{
    public:

    int data;
    int height;

    Node* left, *right;

    Node(int key){
        this->data = key;
        this->height = 1;
        left = right = nullptr;
    }
};

int getheight(Node* root){
    if(!root) return 0;

    return root->height;
}

Node* leftrotation(Node* &root){
    Node* childnode = root->right;
    Node* childleft = childnode->left;

    childnode->left = root;
    root->right = childleft;

    // Update height (order should be maintained)
    root->height = 1 + max(getheight(root->left),getheight(root->right));
    childnode->height = 1 + max(getheight(childnode->left),getheight(childnode->right));

    return childnode;
}

Node* rightrotation(Node* &root){
    Node* childnode = root->left;
    Node* childright = childnode->right;

    childnode->right = root;
    root->left = childright;

    // Update height (order should be maintained)
    root->height = 1 + max(getheight(root->left),getheight(root->right));
    childnode->height = 1 + max(getheight(childnode->left),getheight(childnode->right));

    return childnode;
}
Node* insert(Node* &root,int key){
    if(!root)
    return new Node(key);
    
    // Traverse to position of insertion
    if(key > root->data){
        root->right = insert(root->right,key);
    }
    else if(key < root->data){
        root->left = insert(root->left,key);
    }
    // for handling duplicates
    else return root;

    // Update height
    root->height = 1 + max(getheight(root->left),getheight(root->right));

    int balance = getheight(root->left) - getheight(root->right);

    // LL
    if(balance > 1 && key < root->left->data){
        return rightrotation(root);
    }
    // LR
    else if(balance > 1 && key > root->left->data){
        root->left = leftrotation(root->left);
        return rightrotation(root);
    }
    // RR
    else if(balance < -1 && key > root->right->data){
        return leftrotation(root);
    }
    // RL
    else if(balance < -1 && key < root->right->data){
        root->right = rightrotation(root->right);
        return leftrotation(root);
    }
    // Tree is already balanced
    return root;
}

void inorder(Node* root){
    if(!root)return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    vector<int>arr = {3,65,23,64,86,34,77,24,105,24,74,72,12};

    Node* root = nullptr;
    for(int i = 0;i<arr.size();i++){
        root = insert(root,arr[i]);
    }

    inorder(root);

}