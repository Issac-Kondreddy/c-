
/*
Access Specifier
1. Public 
public - which means that they can be accessed and modified from outside the code.
2. Private
private - which means that they can only be accessed and modified from inside the code.
3. Protected
protected - which means that they can be accessed and modified from inside the code and from derived classes.
*/
#include <iostream>
using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
  myObj.y = 50;  // Not allowed (y is private)
  return 0;
}

