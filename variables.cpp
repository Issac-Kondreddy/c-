#include<iostream>
using namespace std;
/*
Syntax
type variablename = value;
cout << variablename;
*/
int main(){
    int mynum = 34;
    cout << mynum;
    cout << "\n";
    int num;
    num = 43;
    cout << num;
    cout << "\n";
    int sum =  mynum + num;
    cout << "The sum of " << mynum << " and "<< num << "is " << sum;
    int x,y,z;
    x = 5;
    y = 6;
    z = x + y;
    cout << "\n";
    cout << "The sum of " << x << " and " << y << " is ";
    cout << z;
    cout << "\n";
    int a,b,c;
    a = b = c = 50;
    cout << "\n";
    cout << "The value of a is " << a;
    cout << "\n";
    cout << "The value of b is " << b;
    cout << "\n";
    cout << "The value of c is " << c;
    cout << "\n";
}