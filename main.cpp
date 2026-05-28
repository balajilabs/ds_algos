#include <iostream>
#include <ds/stack.h>
#include <ds/queue.h>


void testStack()
{
    Stack stack;
     std::cout << "stack is"<< (stack.empty() ? " " : " not ") <<"empty"  << std::endl;
    stack.push(1);
    stack.push(2);
    stack.push(3);
     std::cout << "stack is"<< (stack.empty() ? " " : " not ") <<"empty"  << std::endl;
    std::cout << "item poped" << stack.pop() << std::endl;
    std::cout << "item poped" << stack.pop() << std::endl;
    std::cout << "item poped" << stack.pop() << std::endl;
     std::cout << "stack is"<< (stack.empty() ? " " : " not ") <<"empty"  << std::endl;
}

void testQueue()
{
    Queue queue;
    std::cout << "queue is"<< (queue.empty() ? " " : " not ") <<"empty"  << std::endl;
    queue.put(1);
    queue.put(2);
    queue.put(3);

    std::cout << "queue is"<< (queue.empty() ? " " : " not ") <<"empty"  << std::endl;
    std::cout << "item taken: " << queue.take() << std::endl;
    std::cout << "item taken: " << queue.take() << std::endl;
    std::cout << "item taken: " << queue.take() << std::endl;
    std::cout << "queue is"<< (queue.empty() ? " " : " not ") <<"empty"  << std::endl;
}

int main()
{
    testQueue();
    return 0;
}