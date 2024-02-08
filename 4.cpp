//WAP to illustrate the invocation of constructor and destructor in single inheritance.//
#include<iostream>
#include<conio.h>
using namespace std;
class one
{
    public:
    one()
    {
        cout<<"Base class constructor is called"<<endl;
    }
    ~one()
    {
        cout<<"Basse class destructor is called"<<endl;
    }
};
class two:public one{
    public:
    two()
    {
        cout<<"Constructor of derived class is called"<<endl;

    }
    ~two()
    {
        cout<<"Destructor of derived class is called"<<endl;
    }
};
int main()
{
    two t;
    getch();
    return 0;
}
