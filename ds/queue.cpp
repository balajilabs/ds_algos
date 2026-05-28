#include <ds/queue.h>
#include <iostream>

void Queue::put(int item)
{
    if(size() == capacity) throw std::runtime_error("queue is full");
    items[wp] = item;
    wp = (wp+1) % capacity;
}

int Queue::take()
{
    if(!size()) throw std::runtime_error("queue is empty");
    int r = items[rp];
    rp = (rp+1) % capacity;
    return r;
}