#include<iostream>
int main(){
    int arr[6] = {1,2,3,4,5,6};
    int *ptr = arr;
    std::cout << "Pointer Points to : " << *ptr << std::endl;
    ptr++;
    std::cout << "Pointer Points to : " << *ptr << std::endl;
    ptr += 2;
    std::cout << "Pointer Points to : " << *ptr << std::endl;
    //Pointer Arthimetic
    /*
    ptr++ : ptr = ptr + 1
    ptr-- : ptr = ptr - 1
    ptr += 2 : ptr = ptr + 2
    ptr -= 2 : ptr = ptr - 2
    ptr *= 2 : ptr = ptr * 2
    if pointer type is int then it moves by 4 bytes
    if pointer type is char then it moves by 1 byte
    */
}