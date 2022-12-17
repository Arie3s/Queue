#include<iostream>
using namespace std;

class Queue
{
private:
    int array[MAX_SIZE];  // Array to store queue elements
    int front;  // Index of front element
    int rear;   // Index of rear element
    int count;  // Number of elements in the queue

public:
    // Constructor to initialize queue
    Queue()
    {
        front = 0;
        rear = MAX_SIZE - 1;
        count = 0;
    }

    // Function to check if the queue is empty
    bool isEmpty()
    {
        return (count == 0);
    }

    // Function to check if the queue is full
    bool isFull()
    {
        return (count == MAX_SIZE);
    }

    // Function to add an element to the queue
    // It changes rear and count
    void enqueue(int element)
    {
        // Check if the queue is full
        if (isFull())
        {
            cout << "Queue is full" << endl;
            return;
        }

        // Increment rear and add element
        rear = (rear + 1) % MAX_SIZE;
        array[rear] = element;
        count++;
    }

    // Function to remove an element from the queue
    // It changes front and count
    int dequeue()
    {
        // Check if the queue is empty
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return -1;
        }

        // Get the element at the front of the queue
        int element = array[front];

        // Increment front and decrement count
        front = (front + 1) % MAX_SIZE;
        count--;

        return element;
    }
};

int main(){}