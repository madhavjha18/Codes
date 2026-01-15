#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int val): data(val),next(nullptr),prev(nullptr){}
};

class Queue{
    Node *front;
    Node *rear;
    int size;

    public:
    Queue(){
        front = nullptr;
        rear = nullptr;

        size = 0;
    }

    void push(int val){
        Node* temp = new Node(val);
        if(!front){
            front = temp;
            rear = temp;
        }
        else{
            rear->next = temp;
            temp->prev = rear;
            rear = rear->next;
        }
        cout<<"Pushed "<<rear->data<<" into the Queue\n";
        size++;
    }

    void pop(){
        if(!front){
            cout<<"Queue underflow\n";
            return;
        }
        Node *del = front;
        if(front == rear){
            front = nullptr;
            rear = nullptr;
        }
        else{
        front = front->next;
        front->prev = nullptr;
        }
        cout<<"Popped "<<del->data<<" from the Queue\n";
        delete del;
        size--;
    }

    int peek(){
        if(!front){
            cout<<"Queue is empty\n";
            return -1;
        }
        return front->data;
    }

    int back(){
        if(!rear){
            cout<<"Queue is empty\n";
            return -1;
        }
        return rear->data;
    }

    bool isEmpty(){
       return size == 0;
    }

    int Qsize(){
        return size;
    }

    ~Queue(){
        while(!isEmpty()){
            pop();
        }
    }

};

int main(){
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Front element is: "<<q.peek()<<"\n";
    cout<<"Rear element is: "<<q.back()<<"\n";

    cout<<"Queue size is: "<<q.Qsize()<<"\n";

    cout<<"Is Queue empty? "<<(q.isEmpty()? "Yes" : "No")<<"\n";

    q.pop();
    cout<<"Front element is: "<<q.peek()<<"\n";
    cout<<"Rear element is: "<<q.back()<<"\n";

    q.pop();
    q.pop();
    q.pop();

    return 0;
}