// Ambiguity in Multiple Inheritance: //
#include <iostream>
#include<conio.h>
using namespace std;

class Base1 {
public:
    void display() {
        cout << "Display from Base1" << std::endl;
    }
};

class Base2 {
public:
    void display() {
        cout << "Display from Base2" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    // This function would cause ambiguity
    
    void display() {
        cout << "Display from Derived" << std::endl;
    }
};

int main() {
    Derived derived;
    // derived.display(); // This line would cause a compilation error due to ambiguity

    // We need to explicitly specify which display() function we want to call
    derived.Base1::display(); // Call display from Base1
    derived.Base2::display(); // Call display from Base2

    return 0;
}
