#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertatTail(Node* &head,int val){
    if(head == nullptr)
    {
        head = new Node(val);
        return;
    }
    Node *temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = new Node(val);
    
}
void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = nullptr;
    
    int n;
    cout<<"Enter n size of linked list: ";
    cin>>n;

    for(int i = 1;i<=n;i++){
        insertatTail(head,i);
    }
    
    print(head);

    return 0;
}