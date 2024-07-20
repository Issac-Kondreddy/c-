#include<iostream>
using namespace std;
int main(){
    string name;
    getline(cin, name);
    char *ptr = &name[0];
    while (*ptr!='\0'){
        cout << *ptr;
        ptr++;
    }
    return 0;
}