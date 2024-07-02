#include<iostream>
#include<string>
using namespace std;

int main(){
    string greeting = "Hello";
    cout << greeting;
    cout << "\n";
    //string concatation
    greeting += " World";
    cout << greeting<<endl;
    cout << greeting << " " << " Issac"<<endl;
    string firstname = "Issac";
    string lastname = " Kondreddy";
    string fullname = firstname.append(lastname);
    cout << fullname<<endl;
    //numbers and strings
    /*
    C++ uses the + operator for both addition and concatenation.
    Numbers are added. Strings are concatenated.
    */
   int a = 10;
   int b = 20;
   string c = "10";
   string d = "20";
   cout << a+b<<endl;
   cout << c+d<<endl;
   //cout << a + c<<endl; - generates error
   //string length
   cout << greeting.length()<<endl;
   firstname += lastname;
   cout <<"The length of my name is "<< firstname.length() << " characters" <<endl;
   cout <<"(this is using size())The length of my name is "<< firstname.size() << " characters" <<endl;
   //Access strings
   cout << "The first character in string: " << greeting[0]<<endl;
   cout << " The last character in string is : " << greeting[greeting.length()-1] << endl;
   //change character 
   //we can change string characters strings are mutable
   greeting[0] = 'J';
   cout << greeting << endl;
   //at character
   cout << greeting.at(0) << endl;
   greeting.at(0) = 'H';
   cout << greeting << endl;
   //special characters
   string txt = "we are so-called \"Vikings\" from the north";
   cout << txt <<endl;
   string txt1 = "It's Alright!!";
   cout << txt1 <<endl;

   //string userinput
//    string name;
//    cout << "Enter your name:";
//    cin >> name;
//    cout << "Hello " << name <<endl;
   //string userinput with spaces
   string fullname1;
   cout << "Enter your name:";
   getline(cin, fullname1);
   cout << "Hello " << fullname1 << endl;
   //c style strings
   char greeting2[] = "Hello";
   cout << greeting2 << endl;
   //string comparison
   string txt2 = "Hello";
   string txt3 = "Hello";
   cout << txt2.compare(txt3) << endl;
}