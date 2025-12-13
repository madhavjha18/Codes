#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val) : data(val),next(nullptr){};

};

void insertathead(Node* &head,int val){
    Node* temp = new Node(val);
    temp->next = head;
    head = temp;
}
void print(Node* &head){
    Node* temp = head;

    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

void deleteatkrec(Node* &temp,int k){
    if(k == 2){
        Node *del = temp->next;
        temp->next = del->next;
        delete del;
        return;
    }
    if (temp == nullptr || temp->next == nullptr) {
        cout<<"Out of bound k is larger than list size\n";
        return;
    }
    temp = temp->next;
    deleteatkrec(temp,k-1);
}
int main(){
    Node* head = nullptr;

    cout<<"Enter size of the Linked list: ";
    int size;
    cin>>size;
    for(int i = 1; i <= size;i++){
        insertathead(head,i);
    }
    cout<<"Linked List: ";
    print(head);
    int k;
    cout<<"Enter kth node you wish to delete: ";
    cin>>k;
    
    Node* temp = head;
    if(k == 1 && temp->next){
        head = head->next;
        delete temp;

    }
    else
    deleteatkrec(temp,k);
    cout<<"Linked list after deletion: ";
    print(head);

    return 0;

}