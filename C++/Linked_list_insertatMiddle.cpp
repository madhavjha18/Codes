#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next;

    Node(int val) : data(val),next(nullptr){};

};

void insertatMiddle(Node* &head,int val){
    int n;
    Node* temp = head;
    if(head == nullptr){
        head = new Node(val);
        head->next = temp;
        return;
    }
    while(temp){
        n++;
        temp = temp->next;
    }
    if(n % 2 != 0) n = (n - 1) / 2 - 1 ;
    else n = (n / 2 )- 1;
    
    temp = head;
    while(n--){
        temp = temp->next;
    }
    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next = newnode;
}

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
    int n;
    cout<<"Enter n size of Linked list: ";
    cin>>n;
    for(int i = 1;i <= n;i++){
        insertatHead(head,i);
    }
    cout<<"Linked list before: ";
    print(head);

    insertatMiddle(head,55);
    cout<<"Linked list after insertion in middle: ";
    print(head);

    return 0;
    
}