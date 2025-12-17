#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;

    Node(int val): data(val),next(nullptr),prev(nullptr){}
};

void insertathead(Node* &head,int val){
    if(!head){
        Node *newnode = new Node(val);
        head = newnode;
        return;
    }
    Node *newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}

void print(Node *head){
    cout<<"NULL->";
    while(head){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}

void deletetail(Node* &head){
    if(!head){
        cout<<"No node for deletion\n";
        return;
    }
     Node *temp = head;
    if(!head->next){
        head = nullptr;
        delete temp;
        return;
    }
   
    while(temp->next->next){
        temp = temp->next;
    }
    Node *del = temp->next;
    temp->next = nullptr;
    delete del;
}
int main(){
    Node* head = nullptr;
      int n;
    cout<<"Enter the size of the Linked list: ";
    cin>>n;
    for(int i = 1;i <= n;i++){
        insertathead(head,i);
    }
    cout<<"Original linked list: ";
    print(head);

    deletetail(head);
    cout<<"Linked list after tail deletion: ";
    print(head);

}