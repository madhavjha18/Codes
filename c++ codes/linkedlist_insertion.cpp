#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }

};

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}
int main(){

    vector<int>a={3,6,2,7,2};
    Node *head;
    head=NULL;
    int n=a.size();
    
    for(int i=1;i<=n;i++){
        if(head==NULL){
            head=new Node(a[n-i]);
        }
        else{
            Node *temp;
            temp=new Node(a[n-i]);
            temp->next=head;
            head=temp;
        }
    }

    print(head);
    return 0;
}