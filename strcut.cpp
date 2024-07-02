#include<iostream>
using namespace std;
struct {
    string name;
    int age;
}Person1, Person2, Person3;

struct Dog{
    string name;
    string breed;
    int age;
};
int main(){
    Person1.name = "John";
    Person1.age = 20;
    Person2.name = "Mary";
    Person2.age = 25;
    Person3.name = "Bob";
    Person3.age = 30;
    cout << Person1.name << " " << Person1.age << endl;
    cout << Person2.name << " " << Person2.age << endl;
    cout << Person3.name << " " << Person3.age << endl;
    Dog d1;
    d1.name = "Fido";
    d1.breed = "Golden Retriever";
    d1.age = 5;
    cout << d1.name << " " << d1.breed << " " << d1.age;
    return 0;
}
