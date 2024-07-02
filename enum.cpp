#include<iostream>
using namespace std;
enum level{
    low = 0,
    medium = 1,
    high = 2
};

int main(){
   enum level i = low;
   switch(i){
    case 0:
    cout<<"low"<<endl;
    break;
    case 1:
    cout<<"medium"<<endl;
    break;
    case 2:
    cout<<"high"<<endl;
    break;
    }
}