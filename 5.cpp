//WAP to illustrate the invocation of constructor and destructor in multiple inheritance.
#include <iostream>
#include<conio.h>
using namespace std;

class Base1
{
public:
    Base1()
    {
        cout << "Base1 constructor called" << std::endl;
    }

    ~Base1()
    {
        cout << "Base1 destructor called" << std::endl;
    }
};

class Base2
{
public:
    Base2()
    {
        cout << "Base2 constructor called" << std::endl;
    }

    ~Base2()
    {
        cout << "Base2 destructor called" << std::endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    Derived()
    {
        cout << "Derived constructor called" << std::endl;
    }

    ~Derived()
    {
        cout << "Derived destructor called" << std::endl;
    }
};

int main()
{
    Derived d;
    return 0;
}