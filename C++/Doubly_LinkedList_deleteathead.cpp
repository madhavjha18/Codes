#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;

    Node(int val): data(val),next(nullptr),prev(nullptr){}
};

void insertathead(Node* &head,int val){
    if(!head){
        Node *newnode = new Node(val);
        head = newnode;
        return;
    }
    Node *newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void print(Node *head){
    cout<<"NULL->";
    while(head){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}

void deletehead(Node* &head){
    if(!head){
        cout<<"No node to delete\n";
        return;
    }
    Node *temp = head;
    if(!head->next){
        head = nullptr;
        delete temp;
        return;
    }
    
    head = head->next;
    head->prev = nullptr;
    delete temp;
}
int main(){
    Node *head = nullptr;
    int n;
    cout<<"Enter the size of the Linked list: ";
    cin>>n;
    for(int i = 1;i <= n;i++){
        insertathead(head,i);
    }
    cout<<"Original linked list: ";
    print(head);

    deletehead(head);
    cout<<"Linked list after deletion of head: ";
    print(head);

    return 0;
}