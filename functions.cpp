#include<iostream>
using namespace std;
void hello_world(); //function declared
void hello(string name); //function with parameters
void country(string country = "India");
void greeting(){ //declaration
    cout << "Function called!!"<<endl; //definition
}
void swap(int &x, int &y); //pass by reference
void sumarray(int arr[5]); //pass arrays
int sumofn(int n);
void function1(string name, int age);
//function overloading
int add(int a, int b);
float add(float a, float b);
double add(double a, double b);
//recursion
int factorial(int n);
int main(){
    greeting();
    greeting();
    hello_world();
    hello("Rahul");
    country();
    country("USA");
    country("UK");
    function1("Rahul", 20);
    int result = sumofn(10);
    cout << "The sum of first 10 numbers is " << result << endl;
    int x = 5, y = 10;

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "After swap: x = " << x << ", y = " << y << endl;
int arr[5] = {1, 2, 3, 4, 5};
    sumarray(arr);
    int a = 5;
    int b = 10;
    float f1 = 10.5;
    float f2 = 20.5;
    double d1 = 10.55;
    double d2 = 20.5555;
    cout << "Sum of two integers is " << add(a, b) << endl;
    cout << "Sum of two floats is " << add(f1, f2) << endl;
    cout<< "Sum of two doubles is " << add(d1, d2) << endl;
    cout << "Factorial of 5 is " << factorial(5) << endl;
    return 0;
}
void hello_world(){ //function defined
    cout << "Hello World!!"<<endl;
}

void hello(string name){
    cout << "Hello "<< name <<endl;
}

void country(string country){
    cout << "Hello from " << country <<endl;
}
void function1(string name, int age){
    cout << "Hello " << name << " you are " << age << " years old"<<endl;
}
int sumofn(int n){
    return n*(n+1)/2;
}



void swap(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}

void sumarray(int arr[5]) {
    int sum = 0;
    for (int i = 0; i < 5; i++) { // Changed loop condition to i < 5
        sum += arr[i];
    }
    cout << "The sum of the array is " << sum << endl;
}

int add(int a, int b){
    return a+b;
}
float add(float a, float b){
    return a+b;
}
double add(double a, double b){
    return a+b;
}
int factorial(int n){
    if(n==0 || n==1){
        return 1;
        }
        else{
            return n*factorial(n-1);
            }
}