#include<bits/stdc++.h>
using namespace std;

class Deque{
    int *arr;
    int size;
    int front;
    int rear;

    public:
    Deque(int s){
        size = s;
        arr = new int[s];
        front = -1;
        rear = -1;
    }

    ~Deque(){
        delete[] arr;
    }

    void push_front(int val){
        if(isFull()){
            cout<<"deque overflow\n";
            return;
        }
        cout<<"Pushed "<<val<<" to the front of deque\n";
        if(isEmpty()){
            front++,rear++;
            arr[front] = val;
            return;
        }
        
        front = (front-1+size)%size;
        arr[front] = val;
    }

    void push_back(int val){

        if(isFull()){
            cout<<"deque overflow\n";
            return;
        }

        cout<<"Pushed "<<val<<" to the back of deque\n";
        if(isEmpty()){
            front = rear = 0;
            arr[rear] = val;
            return;
        }

        rear = (rear+1)%size;
        arr[rear] = val;
    }

    void pop_front(){
        if(isEmpty()){
            cout<<"deque underflow\n";
            return;
        }
        cout<<"popped "<<arr[front]<<" from the front of deque\n";
        if(front == rear){
            front = rear = -1;
            return;
        }
        front = (front+1)%size;
    }

    void pop_back(){
        if(isEmpty()){
            cout<<"deque underflow\n";
            return;
        }
        cout<<"popped "<<arr[rear]<<" from the back of deque\n";
        if(front == rear){
            front = rear = -1;
            return;
        }
        rear = (rear-1+size)%size;
    }

    int start(){
        if(isEmpty()){
            cout<<"deque is empty\n";
            return -1;
        }
        return arr[front];
    }

    int end(){
        if(isEmpty()){
            cout<<"deque is empty\n";
            return -1;
        }
        return arr[rear];
    }

    bool isFull(){
        return (rear+1)%size == front;
    }

    bool isEmpty(){
        return (front == -1 && rear == -1);
    }
};

int main(){
    Deque dq(5);

    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    cout<<"Front element is: "<<dq.start()<<"\n";
    cout<<"Rear element is: "<<dq.end()<<"\n";
    dq.pop_front();
    cout<<"Front element is: "<<dq.start()<<"\n";
    dq.pop_back();
    cout<<"Rear element is: "<<dq.end()<<"\n";
    dq.pop_back();
    dq.pop_front();

    return 0;

}