#include <iostream>
#include <memory>

class SmartPtrChiken
{
public:

    SmartPtrChiken()
    {
        std::cout << "Chicken" << std::endl;
    }

    ~SmartPtrChiken()
    {
        std::cout << "~Chicken" << std::endl;
    }
};

void fun()
{
    SmartPtrChiken* rawPtr = new SmartPtrChiken();

    std::unique_ptr<SmartPtrChiken> smartPtr(new SmartPtrChiken());

    delete rawPtr;
}

int main()
{
    fun();
    std::cout << "Hello World!\n";
}
