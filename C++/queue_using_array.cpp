#include<bits/stdc++.h>
using namespace std;

class Queue {
private:
    int *arr;
    int size;
    int front, rear;

public:
    Queue(int size) {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == (rear + 1) % size);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Queue overflow\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        cout << "Pushed " << value << " into the Queue\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }

        cout << "Popped " << arr[front] << " from the Queue\n";

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    int back() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[rear];
    }

    int Qsize() {
        if (isEmpty()) return 0;
        if (rear >= front)
            return rear - front + 1;
        return size - (front - rear - 1);
    }
};

int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"Is Queue full? "<<(q.isFull() ? "Yes" : "No")<<"\n";

    cout<<"No of elements in Queue: "<<q.Qsize()<<"\n";

    cout<<"Rear element is: "<<q.back()<<"\n";

    cout<<"Front element is: "<<q.peek()<<"\n";
    q.pop();
    cout<<"Front element is: "<<q.peek()<<"\n";
    q.pop();

    cout<<"Rear element is: "<<q.back()<<"\n";

    cout<<"No of elements in Queue: "<<q.Qsize()<<"\n";


    q.pop();
    q.pop();
    cout<<"Is Queue empty? "<<(q.isEmpty() ? "Yes" : "No")<<"\n";

    return 0;
}