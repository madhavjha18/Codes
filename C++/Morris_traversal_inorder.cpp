#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* left,*right;

    Node(int val): data(val),left(nullptr),right(nullptr){}
};

void morrisTraversal(Node* root){

    while(root){
        if(!root->left) {
            cout<<root->data<<" ";
            root = root->right;
        }
        else{
            Node* temp = root->left;
            while(temp->right && temp->right != root){
                temp = temp->right;
            }
            if(!temp->right){
                temp->right = root;
                root = root->left;
            }
            else if(temp->right == root){
                cout<<root->data<<" ";
                temp->right = nullptr;
                root = root->right;
            }
        }
    }
}
int main(){
    vector<int>arr = {10,6,15,2,8,13,18,1,4,7,9,-1,-1,-1,-1};

    Node* root = new Node(arr[0]);

    queue<Node*>q;
    q.push(root);
    int n = arr.size();
    int i = 1;
    while(i<n && !q.empty()){
        Node* temp = q.front();
        q.pop();
        if(i<n && arr[i] != -1){
            temp->left = new Node(arr[i]);
            q.push(temp->left);
        }
        i++;
        if(i<n && arr[i] != -1){
            temp->right = new Node(arr[i]);
            q.push(temp->right);
        }
        i++;
    }

    morrisTraversal(root);
    return 0;
}
    