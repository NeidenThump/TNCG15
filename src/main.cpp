#include <iostream>
#include <array>

int main(){
    std::cout << "Hello, world!";

    std::array<int, 3> test;

    std::cout << test[2] << std::endl;

    test={ 1,2 };
    std::cout << test[2];

    return 0;
}