#include<iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
    void intro(){
        cout<<"My name is "<<name<<" and I am "<<age<<" years old."<<endl;
    }
};

int main(){
    Person p1;
    Person p2;
    p1.name = "John";
    p1.age = 30;
    cout << p1.name << endl;
    cout << p1.age << endl;
    p1.intro();
    p2.name = "Jane";
    p2.age = 25;
    cout << p2.name << endl;
    cout << p2.age << endl;
    p2.intro();
}