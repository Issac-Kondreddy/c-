#include<iostream>
using namespace std;
int main(){
    string cars[5] = {"BMW", "Audi","Benz","Lexus","Toyota"};
    //printing elements
    cout << cars[1]<<endl;
    cout << cars[0]<<endl;
    cout << cars[2]<<endl;
    cout << cars[3]<<endl;
    cout << cars[4]<<endl;
    //printing elements using for loop
    for(int i=0;i<5;i++){
        cout << cars[i]<<endl;
        }
    //changing element
    cars[0] = "Honda";
    cout << cars[0]<<endl;

    int num[] = {1,2,3,4,5,6};
    cout << num[0]<<endl;
    cout << num[1]<<endl;
    cout << num[2]<<endl;
    for(int i: num){
        cout << i<<endl;
    }

    cout << "The size of array: " << sizeof(num)/sizeof(num[1]);
}