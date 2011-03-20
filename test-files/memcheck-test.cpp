#include <stdexcept>
#include <iostream>

class BuggyPool
{
public:
    BuggyPool(int* data)
    {
        throw std::runtime_error("Hello from BuggyPool"
                                 "(I was written in tough times)");
    }
};

void foo()
{
    int* values = new int[1024];
    BuggyPool pool(values);
    // pool is used somehow
    delete [] values;
}

int main()
{
    try
    {
        foo();
    }
    catch(std::runtime_error& err)
    {
        std::cout<<"ERROR: "<< err.what()<<std::endl;
    }
}
