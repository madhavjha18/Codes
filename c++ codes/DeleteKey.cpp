#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int value){
        data=value;
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

void deleteKey(node* &head,int key){
    if(head->data==key)
    {
        head=head->next;
        return;
    }
    node* temp=head;

    while(temp->next->data!=key)
    {
        if(temp->next->next==nullptr)
        return;
    temp=temp->next;

    }

    temp->next=temp->next->next; 
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

    print(head);

    cout<<"Insert the element you wish to delete: "<<endl;
    int key;
    cin>>key;
    
    deleteKey(head,key);

    cout<<"Updated linked list: "<<endl;
    print(head);

    return 0;
}