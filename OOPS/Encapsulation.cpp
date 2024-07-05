#include<iostream>
using namespace std;

class Student{   
public:
    Student(string name, int rollno){
        this->name = name;
        this->rollno = rollno;
    }
private:
    string registration_no;
public:
    string name;
    int rollno;

    void setregistration_no(string r_no){
        registration_no = r_no;
    }

    void getregistration_no(){
        cout << "Registration no: " << registration_no << endl;
    }
};

int main(){
    Student s1("Issac", 22);
    s1.setregistration_no("12345");
    s1.getregistration_no();
    cout << "the name of student is " << s1.name << endl;
    cout << "the roll no of student is " << s1.rollno << endl;
    return 0;
    
}
