#include <iostream>

using namespace std;

class Stack {

public:
int stack[20], n=20, top=-1;
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is \t"<< stack[top] <<endl;
      top--;
   }
}
void peek(){
    if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The peek element is \t"<< stack[top] <<endl;
   }
}
void display() {
   if(top>=0) {
      cout<<"Stack elements are:\t";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
};
int main()
{
    Stack s;
    //s.pop();
    s.push(5);
    s.push(8);
    s.push(11);
    s.push(14);
    s.push(19);

    s.display();
    s.peek();
    s.display();
    s.pop();
    s.pop();
    s.display();
    return 0;
}
