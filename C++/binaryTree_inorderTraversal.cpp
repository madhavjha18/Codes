#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val): data(val),left(nullptr),right(nullptr){}
};


void inorder(TreeNode* root){
    if(!root) return;

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    vector<int>arr = {1,2,3,4,5,6,-1,7,8,-1,-1,9,10,-1,-1,-1,-1,-1,-1,-1,-1};

    TreeNode* root = new TreeNode(arr[0]);

    queue<TreeNode*>q;
    q.push(root);
    int n = arr.size();
    int i = 1;
    while(i<n && !q.empty()){
        TreeNode* temp = q.front();
        q.pop();
        if(i<n && arr[i] != -1){
            temp->left = new TreeNode(arr[i]);
            q.push(temp->left);
        }
        i++;
        if(i<n && arr[i] != -1){
            temp->right = new TreeNode(arr[i]);
            q.push(temp->right);
        }
        i++;
    }

    inorder(root);

    return 0;

}