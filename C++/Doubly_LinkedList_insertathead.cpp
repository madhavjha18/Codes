#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;

    Node(int val) : data(val),next(nullptr),prev(nullptr){};
};

void insertathead(Node*&head,int val){

    if(!head){
        head = new Node(val);
        return;
    }
    Node* newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void print(Node* &head){
    Node* temp = head;
    cout<<"NULL->";
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

int main(){
    Node *head = nullptr;
    int n;
    cout<<"Enter the size of doubly linked list: ";
    cin>>n;
    
    for(int i = 1;i<=n;i++){

        insertathead(head,i);
    }
    print(head);
    return 0;
}