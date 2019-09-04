#include <iostream>
using std::cout;

int stack[500];
int n = 500;
int top = -1;

void push(int value);
int pop();
int peek();
void contentsof();




void push (int value)
{
    if (top >= n-1)
    {
        cout << "Stack Overflow";
    }
    
    else
    {
        top++;
        stack[top] = value;
    }
    
}

int pop()
{
    if (top <= -1)
    {  cout << "Stack Underflow";
        return 0;
    }
    
    else
    {
        top--;
        return 0;
        
    }
}

void contentsof()
    {
        if (top <= -1)
            cout << "Stack is empty";
        else
        {
            for (int x = top; x >= 0; x--)
            {
                cout << stack[top] << std::endl;
                top--;
            }
        }
    }
    
int peek()
{
    cout << "Last element is " << stack[top];
    return 0;
}


int main ()
{
    push(4);
    push(5);
    push(6);
    pop();
    contentsof();
 
