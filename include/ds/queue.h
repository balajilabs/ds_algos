#include <memory>

class Queue
{
public:
    Queue(int maxCapacity = 16):capacity(maxCapacity), rp(0), wp(0)
    {
        items = std::make_unique<int[]>(capacity);        
    }
    
    void put(int item);
    int take();
    int size() { return (wp + capacity - rp) % capacity; }

    bool empty() {return !size();}

private:
    std::unique_ptr<int[]> items;
    int rp;
    int wp;
    int capacity;
};