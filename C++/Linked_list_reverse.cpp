#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val): data(val),next(nullptr){};
};

void insertathead(Node* &head,int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void print(Node* &head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void reversell(Node* &head){
    if(!head || !head->next) return;

    Node* curr = head->next;
    head->next = nullptr;
    Node *prev = head;
    while(curr->next){
        head = curr->next;
        curr->next = prev;
        prev = curr;
        curr = head;
        
    }
    curr->next = prev;
    head = curr;

}
int main(){
    Node* head = nullptr;

    int size;
    cout<<"Enter the size of the linked list: ";
    cin>>size;

    for(int i = 1;i<=size;i++){
        insertathead(head,i);
    }
    cout<<"Original Linked list: ";
    print(head);

    reversell(head);

    cout<<"Linked list after reverse: ";
    print(head);



}