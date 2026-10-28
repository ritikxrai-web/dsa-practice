#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE* next;
};

int main()
{

NODE* first = new NODE();
NODE* second = new NODE();
NODE* third = new NODE();

first -> data = 20;
first -> next = second;

second -> data = 30;
second -> next = third;

third -> data = 40;
third -> next = NULL;

NODE* temp = first;

while ( temp != NULL)
{
    cout << temp -> data << "\n";
    temp = temp -> next;
}

return 0;
}