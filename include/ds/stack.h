class Stack
{
public:
    Stack(int maxCapacity = 16):capacity(maxCapacity), top(0), items(nullptr)
    {
        items = new int[capacity];
    }
    
    ~Stack()
    {
        delete[] items;
    }

    //delete copy constructor and copy assignment operator
    Stack(const Stack&) = delete;
    Stack&& operator=(const Stack&) = delete;

    void push(int item);
    int pop();

    int size() const {return top;}
    bool empty() const {return !top;}
    
private:
    int* items; //change to smart pointers later
    size_t top;
    size_t capacity;    
};