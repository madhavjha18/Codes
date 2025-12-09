#include<bits/stdc++.h>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        this->data = val;
        this->next = nullptr;
    }

};

void insertatHead(Node* &head,int val){
    Node* temp = head;
    head = new Node(val);
    head->next = temp;
}

void print(Node* &head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    Node* head = nullptr;
    cout<<"Enter n size for linked list: ";
    int n;
    cin>>n;
    for(int i = 1;i<=n;i++){
        insertatHead(head,i);
    }

    print(head);
}