#include<iostream>
using namespace std;
int main(){
    // int n;
    // cout << "Enter your age: ";
    // cin >> n;
    // if(n>=18){
    //     cout << "You are eligible to vote"<<endl;
    // }
    // else{
    //     cout << "You are not eligible to vote"<<endl;
    // }

    // int time;
    // cout << "Enter the time between 0 to 24: ";
    // cin >> time;
    // if(time>=0 && time <= 10){
    //     cout << "Good Morning" <<endl;
    // }
    // else if(time>10 && time <= 17){
    //     cout << "Good Afternoon" <<endl;
    // }
    // else{
    //     cout << "Good Evening" <<endl;
    // }
    // //short hand if else
    
    // int age = 18;
    // bool result = (age>=18)?true:false;
    // cout << result << endl;

    //switch
    int month;
    cout << "Enter the month number: ";
    cin >> month;
    switch(month){
        case 1:
        cout << "January" << endl;
        break;
        case 2:
        cout << "February" << endl;
        break;
        case 3:
        cout << "March" << endl;
        break;
        case 4:
        cout << "April" << endl;
        break;
        case 5:
        cout << "May" << endl;
        break;
        case 6:
        cout << "June" << endl;
        break;
        case 7:
        cout << "July" << endl;
        break;
        case 8:
        cout << "August" << endl;
        break;
        case 9:
        cout << "September" << endl;
        break;
        case 10:
        cout << "October" << endl;
        break;
        case 11:
        cout << "November" << endl;
        break;
        case 12:
        cout << "December" << endl;
        break;
        default:
        cout << "Invalid month" << endl;
        }
}