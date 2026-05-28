#include <iostream>
#include <ds/stack.h>

int main()
{
    Stack stack;
    std::cout << "stack empty= " << (stack.empty() ? "true" : "false") << std::endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    std::cout << "stack empty= " << (stack.empty() ? "true" : "false") << std::endl;
    std::cout << "item poped" << stack.pop() << std::endl;
    std::cout << "item poped" << stack.pop() << std::endl;
    std::cout << "item poped" << stack.pop() << std::endl;
    std::cout << "stack empty= " << (stack.empty() ? "true" : "false") << std::endl;
    return 0;
}