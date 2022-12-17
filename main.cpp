#include<iostream>
using namespace std;

class Queue { // A class to represent a queue
private:
    int front, rear, currentSize;
    unsigned capacity;
    int* array;
public:
    Queue(int size){// constructor
        capacity = size;
        array = new int[capacity];
        front = -1;
        rear  = -1;
        currentSize = 0;
    }
    void insert(int j){
        if(currentSize==capacity){cout<<"Queue is full";return;}
        if(front==-1){front++;rear++;array[front]=j;currentSize++;return;}
        rear++;
        array[rear]=j;
        currentSize++;
    }
    int remove(){
        front++;
    }
    int peek(){//equivalent to accessing first element
        return array[front];
    }
    bool isEmpty(){
        return currentSize==0;
    }
    bool isFull(){
        return currentSize==capacity;
    }
    int Size(){
        return currentSize;
    }
};


int main(){
    Queue q1(5);
    q1.insert(4);
    q1.insert(3);
    q1.insert(2);
    q1.insert(1);
    q1.remove();
    cout<<endl;
    q1.insert(3);
    q1.insert(2);
    q1.insert(1);
}