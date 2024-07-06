#include<iostream>
using namespace std;

// Base class
class Vehicle {
public:
    string brand;
    Vehicle() : brand("Ford") {} // Constructor to initialize the brand
    void honk() {
        cout << "Tuut tuut!!" << endl;
    }
};

// Derived class
class Car : public Vehicle {
public:
    string model;
    Car() : model("Mustang") {} // Constructor to initialize the model
};

int main() {
    Car myCar;
    myCar.honk();
    cout << myCar.brand << endl;
    cout << myCar.model << endl;
    return 0;
}
