#include <iostream>

void demonstratePointers() {
    // Dangling pointer example
    int *danglingPtr = new int(10);
    delete danglingPtr;
    // danglingPtr is now a dangling pointer

    // Void pointer example
    int var = 20;
    void *voidPtr = &var; // voidPtr can point to any type
    std::cout << "Value pointed to by voidPtr (casted to int*): " << *(static_cast<int*>(voidPtr)) << std::endl;

    // Null pointer example
    int *nullPtr = nullptr;
    if (nullPtr == nullptr) {
        std::cout << "nullPtr is null." << std::endl;
    }

    // Wild pointer example
    int *wildPtr; // Uninitialized pointer, wild pointer
    // *wildPtr = 30; // Uncommenting this line will result in undefined behavior
}

int main() {
    demonstratePointers();
    return 0;
}
