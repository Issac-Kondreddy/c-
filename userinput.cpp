#include<iostream>
using namespace std;
int main(){
    int x;
    cout << "Enter the number to check if even: ";
    cin >> x;
    if(x%2==0){
        cout << "The given number " << x << "is even\n";
    }
    else{
        cout << "The given number " << x << " is odd\n";
    }
}/**/