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

void insertionAtStart(node* &head,int value){
    node* newnode= new node(value);
    newnode->next=head;
    head=newnode;
}

void print(node* &head){
    node* temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deletionAtTail(node* &head){
    if(head==nullptr)
    return;
    if(head->next==nullptr)
    {
        delete head;
        head=nullptr;
        return;
    }
    node* temp=head;

    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

int main(){
    node* head=nullptr;

    insertionAtStart(head,5);
    insertionAtStart(head,4);
    insertionAtStart(head,3);
    insertionAtStart(head,2);
    insertionAtStart(head,1);

    cout<<"Linked list before deletion:"<<endl;
    print(head);

    deletionAtTail(head);
    deletionAtTail(head);

    cout<<"Linked list after deletion:"<<endl;
    print(head);

    return 0;

}