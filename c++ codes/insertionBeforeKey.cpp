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

void insert(node* &head,int value){
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

void insertBeforeKey(node* &head,int value,int key){

// If given key does not exist it will be added at the tail.
    node* newnode= new node(value);
    node* temp=head;
    while(temp->next->data!=key){

        if(temp->next->next==nullptr){
            temp->next->next=newnode;
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

    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);

    print(head);

    cout<<"Enter value and key: ";
    int val,key;
    cin>>val>>key;

    insertBeforeKey(head,val,key);

    cout<<"Updated Linked list: "<<endl;
    print(head);

    return 0;
}