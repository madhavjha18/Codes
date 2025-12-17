#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next,*prev;

    Node(int val): data(val),next(nullptr),prev(nullptr){}
};


void insertathead(Node* &head,int val){

    if(!head){
        Node* newnode = new Node(val);
        head = newnode;
        return;
    }

    Node* newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void print(Node* head){
    Node *temp = head;

    cout<<"NULL->";
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void insertinbetween(Node* &head,int pos,int val){
    if(!pos){
        Node* newnode = new Node(val);
        newnode->next = head;
        head->prev = newnode;
        head = newnode;
        return;
    }
    Node* curr = head;
    
    while(--pos){
        curr = curr->next;
    }
    if(!curr->next){
        Node* newnode = new Node(val);
        newnode->prev = curr;
        curr->next = newnode;
        return;
    }
    Node *newnode = new Node(val);
    newnode->next = curr->next;
    newnode->prev = curr;
    curr->next->prev = newnode;
    curr->next = newnode;
}
int main(){
    Node *head = nullptr;

    int n;
    cout<<"Enter the size of Linked list: ";
    cin>>n;
    for(int i = 1; i<=n;i++){
        insertathead(head,i);
    }
    print(head);

    int val,pos;
    cout<<"Enter the position of newnode to be inserted it should be less than equal to "<<n+1<<" : ";
    cin>>pos;
    if(pos>n+1 || pos<=0) cout<<"Invalid position\n";
    else{
        cout<<"Enter the value of the node: ";
        cin>>val;
        insertinbetween(head,pos-1,val);
        print(head);
    }

    return 0;
}
