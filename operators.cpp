#include <iostream>
using namespace std;

int main() {
    // Arithmetic Operators
    int a = 10, b = 20;
    cout << "Addition of a and b is " << a + b << endl;
    cout << "Subtraction of a and b is " << a - b << endl;
    cout << "Multiplication of a and b is " << a * b << endl;
    cout << "Division of a and b is " << a / b << endl;
    cout << "Modulus of a and b is " << a % b << endl;
    cout << "Increment of a is " << a++ << endl;
    cout << "Decrement of a is " << --a << endl;

    // Relational Operators
    cout << "a is greater than b: " << (a > b) << endl;
    cout << "a is less than b: " << (a < b) << endl;
    cout << "a is greater than or equal to b: " << (a >= b) << endl;
    cout << "a is less than or equal to b: " << (a <= b) << endl;
    cout << "a is equal to b: " << (a == b) << endl;
    cout << "a is not equal to b: " << (a != b) << endl;

    // Logical Operators
    int c = 30;
    cout << "a is greater than b and b is greater than c: " << ((a > b) && (b > c)) << endl;
    cout << "a is greater than b or b is greater than c: " << ((a > b) || (b > c)) << endl;
    cout << "Not (a is greater than b): " << !(a > b) << endl;

    // Conditional Operator
    int x = 10, y = 20;
    int z = x > y ? x : y;
    cout << "z is " << z << endl;

    // sizeof Operator
    cout << "Size of int is " << sizeof(int) << endl;
    cout << "Size of double is " << sizeof(double) << endl;

    // Type Casting
    float f = 20.5;
    cout << "a is " << a << endl;
    cout << "f is " << f << endl;
    cout << "a + f is " << a + f << endl;
    cout << "Type cast a to float and add f: " << (float)a + f << endl;
    cout << "Type cast (a + f) to int: " << (int)(a + f) << endl;

    // Bitwise Operators
    cout << "a & b: " << (a & b) << endl;
    cout << "a | b: " << (a | b) << endl;
    cout << "a ^ b: " << (a ^ b) << endl;
    cout << "~a: " << (~a) << endl;
    cout << "a << 2: " << (a << 2) << endl;
    cout << "b >> 2: " << (b >> 2) << endl;

    return 0;
}
