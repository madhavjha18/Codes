#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val) : data(val),next(nullptr){};
};

void insertathead(Node* &head,int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}


void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteattail(Node* &head){

    if(head == nullptr)return;
    if(!head->next){
        delete head;
        head = nullptr;
        return;
    }
    Node* temp = head;
    while(temp->next->next){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
int main(){

    Node* head = nullptr;

    int size;
    cout<<"Enter size of the linked list: ";
    cin>>size;
    for(int i = 1;i <= size;i++){
        insertathead(head,i);
    }
    print(head);
    cout<<"Enter no of nodes to be deleted from the back: ";
    cin>>size;
    for(int i = 0;i < size;i++){
        deleteattail(head);
    }
    cout<<"Linked list after deletion: ";
    print(head);

    return 0;
}