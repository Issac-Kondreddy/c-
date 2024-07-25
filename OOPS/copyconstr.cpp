#include<iostream>
using namespace std;
class MyClass {
    int* data;
public:
    // Default constructor
    MyClass() {
        data = new int(0); // Initialize with 0
    }

    // Parameterized constructor
    MyClass(int value) {
        data = new int(value);
    }

    // Copy constructor
    MyClass(const MyClass &ob2) {
        data = new int(*(ob2.data)); // Deep copy of the data
    }

    // Destructor
    ~MyClass() {
        delete data;
    }

    // Set value
    void setValue(int value) {
        *data = value;
    }

    // Get value
    int getValue() const {
        return *data;
    }
};

int main() {
    MyClass c1(10);         // c1's data points to 10
    MyClass c2 = c1;        // c2 is a copy of c1, so c2's data also points to a copy of 10

    c1.setValue(20);        // Change the value in c1
    std::cout << c2.getValue() << std::endl; // What is the value in c2?
    return 0;
}
