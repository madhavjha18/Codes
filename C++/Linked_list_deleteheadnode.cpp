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

void deleteathead(Node* &head){
    if(!head){
    cout<<"Linked list is empty"<<endl;
    return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
}
int main(){

    Node* head = nullptr;
    int size;
    
    cout<<"Enter the size of Linked list: ";
    cin>>size;
    for(int i = 1;i <= size; i++){
        insertathead(head,i);
    }
    print(head);
    cout<<"Enter the no of nodes to be deleted: ";
    cin>>size;
    for(int i = 0;i<size;i++){
        deleteathead(head);
    }
    cout<<"Linked list after deletion at head: "<<endl;
    print(head);

    return 0;
}