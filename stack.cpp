#include <iostream>
#include <stdio.h>
using namespace std;
class Stack
{
public:
    int top = -1;
    int a[1000];
    int max = 1000;
    bool push(int x);
    int pop();
    int peep();
    bool isEmpty();
};
bool Stack::push(int x)
{
    if (top >= (max - 1))
    {
        cout << "Stack Overflow";
        return false;
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed in stack\n";
        return true;
    }
}
int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack UNderflow";
        return false;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int Stack::peep()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    if (top < 0)
        return true;
    else
        return false;
}

// driver program so as to run the above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << "  Element popped from the stack ";
    // print all the elements in the stack
    while (!s.isEmpty())
    {
        // prints top element in the stack
        cout << s.peep() << " ";
        // removes the top element in the stack
        s.pop();
    }
    return 0;
}
