#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    TreeNode* left;
    TreeNode* right;
    int data;

    TreeNode(int val): data(val),left(nullptr),right(nullptr){}
};
int main(){

    queue<TreeNode*>q;

    int x;
    cout<<"Enter root node: ";
    cin>>x;
    if(x != -1){
        TreeNode* root = new TreeNode(x);
        q.push(root);
    }

    while(!q.empty()){
        TreeNode *temp = q.front();
        q.pop();

        cout<<"Enter value of left node(-1 for null ) "<<temp->data<<" : ";
        int l;
        cin>>l;
        if(l != -1){
            temp->left = new TreeNode(l);
            q.push(temp->left);
        }


        cout<<"Enter value of right node(-1 for null) "<<temp->data<<" : ";
        int r;
        cin>>r;
        if(r != -1){
            temp->right = new TreeNode(r);
            q.push(temp->right);
        } 
    }

}