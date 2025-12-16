#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next,*prev;

    Node(int val): data(val),next(nullptr),prev(nullptr){}
};

Node* createbyrec(vector<int>&arr,int index,Node *back){
    if(index == arr.size()) return nullptr;

    Node* newnode = new Node(arr[index]);
    newnode->prev = back;

    newnode->next = createbyrec(arr,index+1,newnode);
    return newnode;
}

void printforward(Node* &head){
    Node* temp = head;
    cout<<"NULL->";
    while(temp){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL\n";
}

Node* findtail(Node* head){
    Node* temp = head;
    while(temp->next) temp = temp->next;

    return temp;
}
void printbackward(Node *tail){
    Node* temp = tail;
    cout<<"NULL<-";
    while(temp){
        cout<<temp->data<<"<-";
        temp = temp->prev;
    }
    cout<<"NULL\n";

}
int main(){
    vector<int>arr = {1,2,3,4,5,6,7,8,9};

    Node* head = createbyrec(arr,0,nullptr);
    printforward(head);

    Node* tail = findtail(head);
    printbackward(tail);

    return 0;

}