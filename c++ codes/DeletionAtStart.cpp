#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=nullptr;
    }
};

void insertionAtTail(node* &head,int value){
    node* newnode= new node(value);
    
    if(head==nullptr){
        head=newnode;
        return;
    }

    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void print(node* &head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


void deletionAtHead(node* &head){
    if(head==nullptr)
    return;

    head=head->next;

}
int main(){
    node* head=nullptr;

    insertionAtTail(head,1);
    insertionAtTail(head,2);
    insertionAtTail(head,3);
    insertionAtTail(head,4);
    insertionAtTail(head,5);

    cout<<"Linked list before deletion:"<<endl;
    print(head);

    deletionAtHead(head);
    
    cout<<"Linked list after deletion:"<<endl;
    print(head);

    return 0;
}