#include <iostream>

int main(){
    int num=10;
    int* ptr = &num;

    std::cout << "The value of num is: " << num << std::endl;
    std::cout << "The address of num is: " << &num << std::endl;
    std::cout << "The value of ptr is: " << ptr << std::endl;
    std::cout << "The value pointed to by ptr is: " << *ptr << std::endl;
    return 0;
}