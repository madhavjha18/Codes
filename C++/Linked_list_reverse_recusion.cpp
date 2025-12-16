#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node* next;

    Node(int val): data(val),next(nullptr){};
};

void insertathead(Node *&head,int val){
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void print(Node *&head){
    Node *temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

Node* reverserec(Node *&curr,Node *&prev){
    if(!curr->next){
        curr->next = prev;
        return curr;
    }

    Node* head = curr->next;
    curr->next = prev;
    return reverserec(head,curr);


}
int main(){

    Node *head = nullptr;
    int size;
    cout<<"Enter the size of the linked list: ";
    cin>>size;

    for(int i = 1;i<=size;i++){
        insertathead(head,i);
    }
    cout<<"Original Linked list: ";
    print(head);

    Node *curr = head->next;
    head->next = nullptr;
    Node* prev = head;

    head = reverserec(curr,prev);
    cout<<"Linked list after reverse: ";
    print(head);

    return 0;
}