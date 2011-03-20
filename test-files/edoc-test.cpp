#include <iostream>
class C1{};
class C2{};

void foo() throw (C1)
{
    throw C2();
}
    
class C
{
public:
    ~C()
    {
        foo();
    }
};

int main() { C c; }
