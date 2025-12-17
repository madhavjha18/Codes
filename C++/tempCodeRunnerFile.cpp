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

void deletenode(Node *&head,int pos){
    Node* temp = head;
    if(pos == 0){
        if(!head->next){
            delete temp;
            head = nullptr;
            return;
        }
        head = head->next;
        head->prev = nullptr;
        delete temp;
        return;
    }
    while(--pos){
        temp = temp->next;

    }
    if(!temp->next){
        temp->prev->next = nullptr;
        delete temp;
        return;
    }
    Node * del = temp->next;
    temp->next = temp->next->next;
    temp->next->next->prev = temp;
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

    int pos;
    cout<<"Enter the node you wish to delete it should be less than equal to "<<n<<" : ";
    cin>>pos;
    if(pos > n || pos<=0) cout<<"Invalid node\n";
    else{
        deletenode(head,pos-1);
        cout<<"Linked list after deleting "<<pos<<" node: ";
        print(head);

    }

    return 0;
}