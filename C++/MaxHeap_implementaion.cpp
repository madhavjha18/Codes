#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
    int *arr;
    int index;
    int total_size;
    
    public:

    MaxHeap(int size){
        arr = new int[size];

        index = 0;
        total_size = size;
    }

    void push(int value){
        if(index == total_size){
            cout<<"Heap overflow\n";
            return;
        }

        arr[index] = value;
        int child = index;
        index++;
        
        while(child > 0 && arr[(child - 1)/2] < arr[child]){
            swap(arr[child],arr[(child - 1)/2]);
            child = (child - 1)/2;
        }
    }

    void Heapify(int i){
        int largest = i;

        int left = i*2 + 1;
        int right = i*2 + 2;

        if(left < index && arr[left] > arr[largest])
        largest = left;

        if(right < index && arr[right] > arr[largest])
        largest = right;

        
        if(largest != i){
            swap(arr[i],arr[largest]);
            Heapify(largest);
        }
    }

    void pop(){
        if(index == 0){
            cout<<"Heap underflow\n";
            return;
        }

        swap(arr[0],arr[index - 1]);
        index--;

        if(index == 0)
        return;

        Heapify(0);
    }

    void print(){
        for(int i = 0;i<index;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }
};

int main() {

    int size;
    cout<<"Enter the size of the MaxHeap: ";
    cin>>size;

    MaxHeap H(size);

    H.push(234);
    H.push(23);
    H.push(34);
    H.push(4);
    H.push(284);
    H.push(134);
    H.push(94);
    H.push(14);
    H.push(44);

    H.print();
    H.pop();
    H.print();
    H.pop();
    H.print();
    H.pop();
    H.print();

    return 0;
}