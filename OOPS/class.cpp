#include<iostream>
using namespace std;

class Car{
    public:
    string Model;
    int make;
    string color;
    // void start(){
    //     cout<<"Car is starting"<<endl;
    // }
    void start();
    void speed(int raise){
        cout << Model << " raised to " << raise <<endl;
    }
};

void Car::start(){
    cout<<"Car is starting"<<endl; //create funciton outside class
}

int main(){
    Car c1;
    c1.Model="BMW";
    c1.make=2019;
    c1.color="Black";
    c1.start();
    c1.speed(50);
    return 0;
}