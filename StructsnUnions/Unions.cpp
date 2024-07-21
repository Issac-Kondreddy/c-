#include<iostream>
using namespace std;
//union
union student
{
    int roll;
    char name[20];
    };
    int main()
    {
        union student s;
        cout<<"Enter roll number:";
        cin>>s.roll;
        cout<<"Enter name:";
        cin>>s.name;
        cout<<"Roll number:"<<s.roll<<endl;
        cout<<"Name:"<<s.name<<endl;
        return 0;
        }
