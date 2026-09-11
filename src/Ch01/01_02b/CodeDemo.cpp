// Complete Guide to C++ Programming Foundations
// Exercise 01_02 WITH MODS
// Hello World, by Eduardo Corpeño 

#include <iostream>

int add(int num1, int num2){
    return num1+num2;
}
int main(){
    int x,y;
    std::cout << "First num?" << std::endl;
    std::cin >> x;

    std::cout << "Second num?" << std::endl;
    std::cin >> y;

    int result = add(x, y);
    std::cout << "The result of adding " << x << " to " << y << " is " << result << std::endl;
    return 0;
}