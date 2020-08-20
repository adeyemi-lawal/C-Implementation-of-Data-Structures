#include <iostream>
#include <string>
#include <cstdlib>

using std::string;
using std::cout;

struct Node
{
    int data;
    Node *next;

};

class Stack {

public:
    Stack();
    ~Stack();
    void push(int number);
    int pop();
    int contentsof();
    bool isEmpty();
    int peek();
    
    
private:
    Node *top;
};


Stack::Stack()
{
    top = NULL;
}

Stack::~Stack()
{
  
}



void Stack::push(int number)
{
    Node *temp = new Node;
    temp ->data = number;
    temp ->next = top;
    top = temp;
}

int Stack::pop()
{
    if (!isEmpty())
    {
        int value = top->data;
        Node *oldtop = top;
        top = oldtop->next;
        delete oldtop;
    
        return value;
    }
    
    else
        return 0;
}

int Stack::contentsof()
{
    Node *current = top;
    if (current == NULL)
    {
        return 0;
    }
    
    else {
    while (current != NULL)
    {
        cout << current->data;
        current = current->next;
        cout << '\n';
    }
    return 0;
    }
}

int Stack::peek()
{
    if (top == NULL)
        return NULL;
    else
    {
        cout << "top element is " << top->data << std::endl;
        return top->data;
    }
    
}



bool Stack::isEmpty()
{
    return (top == NULL);
}


int main()
{
    
    Stack *s = new Stack();
    s->push(27);
    s->push(34);
    s->push(35);
    s->pop();
    s->isEmpty();
    s->peek();
    s->contentsof();
    
    
    delete s;
    return 0;
}
