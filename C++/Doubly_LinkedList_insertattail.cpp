#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int data;
    Node* next,*prev;

    Node(int val): data(val),next(nullptr),prev(nullptr){};
};

void insertattail(Node *&tail,int val){
    if(!tail){
        tail = new Node(val);
        return;
    }
    Node* newnode = new Node(val);
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}
void print(Node* &tail){
    Node* temp = tail;
    cout<<"NULL<-";
    while(temp){
        cout<<temp->data<<"<-";
        temp = temp->prev;
    }
    cout<<"NULL\n";
}

int main(){
    Node* tail = nullptr;
    int n;
    cout<<"Enter the size of linked list: ";
    cin>>n;
    for(int i = 1;i<=n;i++){
        insertattail(tail,i);
    }
    print(tail);
    return 0;
}