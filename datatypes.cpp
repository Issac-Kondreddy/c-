#include<iostream>
#include<string>
using namespace std;
int main(){
    /*
    numberic - int, float, double
    char
    string
    bool
    */
   int a = 10;
   float b = 10.5;
   double c = 10.5;
   char d = 'a';
   string e = "hello";
   bool f = true;
  cout<<"size of int is "<<sizeof(int)<<endl;
  cout<<"size of float is "<<sizeof(float)<<endl;
  cout<<"size of double is "<<sizeof(double)<<endl;
  cout<<"size of char is "<<sizeof(char)<<endl;
  cout<<"size of string is "<<sizeof(string)<<endl;
  cout<<"size of bool is "<<sizeof(bool)<<endl;
 cout<<"a is "<<a<<endl;
 cout<<"b is "<<b<<endl;
 cout<<"c is "<<c<<endl;
 cout<<"d is "<<d<<endl;
 cout<<"e is "<<e<<endl;
 cout<<"f is "<<f<<endl;

 float f1 = 35e3;
 cout<<"f1 is "<<f1<<endl;
/*
size of float and double
float - 4 bytes
double - 8 bytes
The precision of float and double
float - 6 decimal places
double - 15 decimal places
scientific numbers in float and double
*/
   return 0;
}