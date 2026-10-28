#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE* next;
};

NODE* head = NULL;

void insert(int x)
{
    NODE* newnode = new NODE;

    newnode->data = x;
    newnode->next = head;
    head = newnode;
}

void print()
{
    cout << "Data elements in SLL are:\n";

    NODE* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    insert(20);
    insert(30);
    insert(40);

    print();

    return 0;
}
