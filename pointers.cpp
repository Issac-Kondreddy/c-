#include<iostream>
using namespace std;
int main(){
    string name = "Issac";
    cout << name << endl;
    /*
    A pointer is another variable that stores address of 
    variable which it is pointing too..
    if ptr is a pointer
    ptr = name
    ptr stores address of name
    */
   string *ptr = &name;
   cout << "The Address of Name variable is : " << &name << endl;
   cout << "The value of pointer variable is : " << ptr << endl;
   cout << "The value of pointer variable pointing is  : " << *ptr << endl;
   cout << "The value of name variable is :" << name <<endl;

   //changing value with help of pointer
   *ptr = "Issac Kondreddy";
   cout << "The value of name variable is :" << name <<endl;


}