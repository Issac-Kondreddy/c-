#include <iostream>

class MyClass {
    int* data;
public:
    // Default constructor
    MyClass() {
        data = new int(0); // Initialize with 0
        std::cout << "Constructor called, resource allocated." << std::endl;
    }

    // Parameterized constructor
    MyClass(int value) {
        data = new int(value);
        std::cout << "Parameterized constructor called, resource allocated." << std::endl;
    }

    // Copy constructor
    MyClass(const MyClass &ob2) {
        data = new int(*(ob2.data)); // Deep copy of the data
        std::cout << "Copy constructor called, resource copied." << std::endl;
    }

    // Destructor
    ~MyClass() {
        delete data; // Release the memory allocated for data
        std::cout << "Destructor called, resource deallocated." << std::endl;
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
    MyClass obj1(10); // Parameterized constructor called
    {
        MyClass obj2 = obj1; // Copy constructor called
    } // Destructor for obj2 called here, resource deallocated
    std::cout << "End of main." << std::endl;
    return 0; // Destructor for obj1 called here, resource deallocated
}
