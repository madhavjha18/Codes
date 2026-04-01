#include<bits/stdc++.h>

using namespace std;


class Node{
    public:
    int data;
    Node* left,*right;

    Node(int val): data(val),left(nullptr),right(nullptr){}
};

void morrisTraversal(Node* root){
    vector<int>ans;
    while(root){
        if(!root->right) {
            ans.push_back(root->data);
            root = root->left;
            
        }
        else{
            Node* temp = root->right;
            while(temp->left && temp->left != root){
                temp = temp->left;
            }
            if(!temp->left){
                temp->left = root;
                ans.push_back(root->data);
                root = root->right;
            }
            else if(temp->left == root){
                
                temp->left = nullptr;
                root = root->left;
            }
        }
    }
    reverse(ans.begin(),ans.end());

    for(auto &num : ans)cout<<num<<" ";
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
    