// C++ program to demonstrate functioning of substr()
#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Take any string
    string s = "dog:cat";

    // Find position of ':' using find()
    int pos = s.find(":");

    // Copy substring after pos
    string sub = s.substr(pos + 1);
    string sub1 = s.substr(0, pos);

    // prints the result
    cout << "String is: " << sub<<endl;
    cout << "String is: " << sub1;

    return 0;
}
