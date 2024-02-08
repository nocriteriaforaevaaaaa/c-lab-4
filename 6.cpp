//WAP to illustrate the concept of container class in C++.
#include <iostream>
#include <vector>
using namespace std;

class IntContainer {
private:
    vector<int> elements;

public:
    
    void addElement(int element) {
        elements.push_back(element);
    }

   
    void printElements() const {
        for (int elem : elements) {
            cout << elem << " ";
        }
        cout << endl;
    }
};

int main() {
    // Creating an instance of IntContainer
    IntContainer container;

    
    container.addElement(10);
    container.addElement(20);
    container.addElement(30);

    
    cout << "Elements in the container: ";
    container.printElements();

    return 0;
}
