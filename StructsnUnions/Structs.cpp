#include<iostream>
using namespace std;

struct Person{
    string name;
    int age;
    int height;
    int weight;
    char Gender;
};

typedef struct{
    string name;
    int age;
    int height;
    int weight;
    char Gender;
    string school;
}student;
int main(){
    struct Person p1;
    p1.name = "John";
    p1.age = 20;
    p1.height = 170;
    p1.weight = 60;
    p1.Gender = 'M';
    cout << p1.name << endl;
    cout << p1.age << endl;
    cout << p1.height << endl;
    cout << p1.weight << endl;
    cout << p1.Gender << endl;
    cout << "------------------------" << endl;
    student s1;
    s1.name = "Issac";
    s1.age = 24;
    s1.height = 150;
    s1.weight = 70;
    s1.Gender = 'M';
    s1.school = "MIT";
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.height << endl;
    cout << s1.weight << endl;
    cout << s1.Gender << endl;
    cout << s1.school << endl;
    return 0;
}