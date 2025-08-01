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
 
void insertAtEnd(node* &head,int value){
    
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

int main(){
    node* head=nullptr;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);

    print(head);

    return 0;


}