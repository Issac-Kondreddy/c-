#include<iostream>
using namespace std;
int main(){
    string food = "pizza";
    string drink = "coke";
    string &meal = drink;
    cout << meal << endl;
    cout << food << endl;
    cout << drink << endl;

    /*
    & reference operator to refer another variable from 
    present variable
    and & is also used get memory address of a variable
    (location of where location is stored in pc)
    */
   cout << "The memory address of food variable is" << &food << endl;
}