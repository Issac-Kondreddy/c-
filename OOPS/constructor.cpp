#include<iostream>
using namespace std;

class Person{
    public:
        Person(){
            cout<<"Person constructor"<<endl;
        }
    string name;
    int age;
    char Gender;
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Gender: "<<Gender<<endl;
        }
};
/*
constructor with parameters
*/
class Person1{
    public:
    Person1(string name,int age,char Gender){
        this->name = name;
        this->age = age;
       this-> Gender = Gender;
        }
        string name;
        int age;
        char Gender;
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Age: "<<age<<endl;
            cout<<"Gender: "<<Gender<<endl;
            }
    };


int main(){
    Person p1;
    p1.name="Rahul";
    p1.age=20;
    p1.Gender='M';
    p1.display();
    Person1 p2("Issac",24,'M');
    p2.display();
}