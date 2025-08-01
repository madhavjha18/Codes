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

void insertion(node* &head,int value){
    node* newnode= new node(value);
    if(head==nullptr){
        newnode->next=head;
        head=newnode;
        return;
    }
    node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertAfterkey(node* &head,int value,int key){
    
    // If given key does not exist already in linked list the value will be added at the tail.
    node* newnode= new node(value);

    node* temp=head;
    while(temp->data!=key){
        
        if(temp->next==nullptr){
            temp->next=newnode;
            return;
        }
        temp=temp->next;
    }
    newnode->next=temp->next;
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

int main(){
    node* head=nullptr;

    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);

    print(head);

    cout<<"Enter value and key element : "<<endl;
    int val,key;
    cin>>val>>key;

    insertAfterkey(head,val,key);
    cout<<"After insertion key updated Linked list: "<<endl;
    print(head);

    return 0;
}