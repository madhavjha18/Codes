#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left , *right;

    Node(int val){
        data = val;
        left = right = nullptr;
    }
};

void createBST(Node* &root, int data){

    if(!root){
        root = new Node(data);
        return;
    }
    else{
        Node* prev = nullptr;
        Node* curr = root;

        while(curr){
            prev = curr;
            if(curr->data <= data)
                curr = curr->right;
            else
                curr = curr->left;
        }

        Node* temp = new Node(data);

        if(prev->data <= data)
            prev->right = temp;
        else
            prev->left = temp;
    }
}

void printBST(Node* root){

    if(!root) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* temp = q.front();
        q.pop();
        if(temp){
            cout << temp->data << " ";
            if(temp->left) q.push(temp->left);
            else q.push(nullptr);

            if(temp->right) q.push(temp->right);
            else q.push(nullptr);
        } 
        else cout<<-1<<" ";
    }
}

void printinorder(Node* root){
    if(!root) return;

    printinorder(root->left);
    cout<<root->data<<" ";
    printinorder(root->right);
}

int main(){

    Node* root = nullptr;

    vector<int> arr = {52,76,32,13,6,573,356,62,11,66,78};

    for(int i = 0;i < arr.size();i++){
        createBST(root,arr[i]);
    }
    cout<<"Level order traversal: \n";
    printBST(root);
    cout<<"\nAscending order using inorder traversal: \n";
    printinorder(root);
}