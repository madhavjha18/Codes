#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class Deque{
    int size;
    Node* front;
    Node* rear;

    public:
    Deque(){
        front = nullptr;
        rear = nullptr;
        size = 0;
    }

    ~Deque(){
        while(!isEmpty()){
            pop_front();
        }
    }

    void push_front(int val){
        Node *newnode = new Node(val);
        cout<<"Pushed "<<val<<" to the front of deque\n";
        if(!front){
            rear = front = newnode;
            size++;
            return;
        }
        newnode->next = front;
        front->prev = newnode;
        front = newnode;
        size++;
    }

    void push_back(int val){
        Node *newnode = new Node(val);
        cout<<"Pushed "<<val<<" to the back of deque\n";
        if(!rear){
            front = rear = newnode;
            size++;
            return;
        }
        newnode->prev = rear;
        rear->next = newnode;
        rear = newnode;
        size++;
    }

    void pop_back(){
        if(size == 0){
            cout<<"dequeue is empty\n";
            return;
        }

        Node *del = rear;
        if(rear == front){
            rear = front = nullptr;
        }
        else{
            rear = rear->prev;
            rear->next = nullptr;
        }
        cout<<"Popped "<<del->data<<" from the back of deque\n";
        size--;
        delete del;
    }

    void pop_front(){
        if(!size){
            cout<<"dequeue is empty\n";
            return;
        }
        Node *del = front;

        if(rear == front){
            front = rear = nullptr;
        }
        else{
            front = front->next;
            front->prev = nullptr;
        }
        cout<<"Popped "<<del->data<<" from the front of deque\n";
        size--;
        delete del;
    }

    bool isEmpty(){
        return size == 0;
    }

    int Dsize(){
        return size;
    }

    int getFront(){
        if(isEmpty()){
            cout<<"dequeue is empty\n";
            return -1;
        }
        return front->data;
    }
    
    int getRear(){
        if(isEmpty()){
            cout<<"dequeue is empty\n";
            return -1;
        }
        return rear->data;
    }
};

int main(){
    Deque dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    dq.push_front(1);

    cout<<"Front element: "<<dq.getFront()<<"\n";
    cout<<"Rear element: "<<dq.getRear()<<"\n";

    cout<<"Current size of dequeue: "<<dq.Dsize()<<"\n";

    dq.pop_front();
    dq.pop_back();

    cout<<"Front element "<<dq.getFront()<<"\n";
    cout<<"Rear element "<<dq.getRear()<<"\n";

    cout<<"Current size of dequeue after popping from both ends: "<<dq.Dsize()<<"\n";

    while(!dq.isEmpty()){
        dq.pop_front();
    }

    
    dq.pop_front(); // Attempt to pop from empty dequeue

    return 0;
}