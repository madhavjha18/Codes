#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val): data(val),next(nullptr){}
};

class Stack{
    Node *top;
    int size;   //actual size of stack

    public:

    Stack(){
        top = nullptr;
        size = 0;
    }

    // push
    void push(int value){
        Node *temp = new Node (value);
        if(temp==NULL){
            cout<<"Stack Oferflow\n";
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
            cout<<"Pushed "<<value<<" into the stack\n";
        }
    }

    // pop
    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow\n";
            return;
        }
        else{
            Node *temp = top;
            cout<<"Popped "<<top->data<<" from the stack\n";
            top = top->next;
            delete temp;
        }
    }

    // peek
    int peek (){
        if(top==NULL){
            cout<<"Stack is Empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }

    // IsEmpty
    bool IsEmpty (){
        return top==NULL;
    }

    // IsSize
    int IsSize(){
        return size;
    }
};

int main(){
    Stack S;

    S.push(7);
    S.push(5);
    S.push(6);
    S.push(4);
    
    S.pop();

    cout<<S.peek()<<endl;
    cout<<S.IsEmpty()<<endl;
    cout<<S.IsSize()<<endl;

    return 0;
}