#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int var = 10;
    ptr = &var;
    cout << "The value of var : "<< var <<endl;
    cout << "The address of var : "<< &var <<endl;
    cout << "The value of ptr : "<< ptr <<endl;
    cout << "The address of ptr : "<< &ptr <<endl;
    //dereference Operator
    //to modify the value of varaible we can use pointers
    int value = *ptr;
    *ptr = 20;
    cout << "The value of var : "<< var <<endl;
    cout << "The value of ptr : "<< ptr <<endl;
    cout << "The value of value : "<< value <<endl;

}