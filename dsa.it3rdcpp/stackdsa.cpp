#include <iostream>
using namespace std;

#define SIZE 5
int stack[SIZE];
int top = -1;

 void push ( int value )
 {
     if ( top == SIZE - 1)
     {
         cout << "stack is overflow";
     }
     
     else {
         top++;
         stack[top] = value;
         cout << value << "pushed into stack";
     }
 }
 
  void pop()
  {
      
      if (top == -1)
  {
      cout << "stack is empty";
  }
  
    else {

      cout << stack[top] << "poped from the stack" << endl;
      top--;
  }
  }
  
  void peek()
  {
      if ( top == -1)
      {
          cout << "stack is empty" << endl;
      }
      
      else {
          cout << "the peek element" << stack[top] << endl;
      }
  }
  
  void display () {
      if ( top == -1)
      {
          cout << "stack is empty" << endl;
      }
      
      else{
          cout << "the stack elements are" << endl;
          for ( int i = top; i >= 0; i--)
          {
              cout << stack[i] << endl;
          }
      }
  }
  
  int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();

    peek();

    pop();
    pop();

    display();

    peek();

    return 0;
}