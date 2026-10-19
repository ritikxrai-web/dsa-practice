#include <iostream>
using namespace std;

#define SIZE 5

int queue[SIZE];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == SIZE - 1)
    {
        cout << "The queue is full" << endl;
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }

        rear++;
        queue[rear] = value;

        cout << value << " is added to queue" << endl;
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        cout << queue[front] << " value is deleted" << endl;
        front++;
    }
}

void peek()
{
    if (front == -1 || front > rear)
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        cout << queue[front] << " is peek element" << endl;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "The queue is empty" << endl;
    }
    else
    {
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();

    peek();

    dequeue();
    dequeue();

    display();

    peek();

    return 0;
}