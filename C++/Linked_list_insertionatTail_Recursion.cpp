#include<bits/stdc++.h>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int val) : data(val),next(nullptr){};

};

void insertatTailrec(Node* &head,int arr[],int i,int n){
    if(i == n)return;

    if(!head){
        head = new Node(arr[i]);
    }
    else{
    Node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = new Node(arr[i]);
}
    insertatTailrec(head,arr,i+1,n);

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

    int arr[] = {2,5,7,11,13,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* head = nullptr;

    insertatTailrec(head,arr,0,n);

    print(head);

    return 0;
}