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

void deleteatk(Node* &head,int k){
    if (head == nullptr) {
        cout << "List is empty\n";
        return;
    }
    Node* temp = head;
    if(k == 1){
        head = head->next;
        delete temp;
        cout<<"Linked list after deletion: ";
        print(head);
        return;
    }
    k-=2;
    while(temp && k--){
        temp = temp->next;
    }
    if(!temp || temp->next == nullptr){
        cout<<"Kth node is out of bound \n";
        return;
    }
    Node* del = temp->next;
    temp->next = del->next;
    delete del;
    cout<<"Linked list after deletion: ";
    print(head);
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
    
    deleteatk(head,k);

    return 0;

}