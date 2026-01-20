#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int data;

    TreeNode(int val): data(val),left(nullptr),right(nullptr){}
};

void create_usingRecursion(TreeNode* &root){
    int x;
    cin>>x;

    if(x == -1){
        root = nullptr;
        return;
    }

    root = new TreeNode(x);

    cout<<"Enter left child node value(-1 for null) of "<<x<<": ";
    create_usingRecursion(root->left);

    cout<<"Enter right child node value(-1 for null) of "<<x<<": ";
    create_usingRecursion(root->right);
}

int main(){
    TreeNode *root = nullptr;

    cout<<"Enter root node value(-1 for null): ";
    create_usingRecursion(root);

    return 0;
}