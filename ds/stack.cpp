#include "ds/stack.h"

#include <iostream>
void Stack::push(int item)
{
    if (top == capacity) throw std::runtime_error("stack is full");
    items[top] = item;
    ++top;
}

int Stack::pop()
{
    if(!top) throw std::runtime_error("stack is empty");
    
    return items[--top];
}