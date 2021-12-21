#include <iostream>

int main(){

    int a = 1;
    int &b = a;
    a += 10;

    std::cout << "adding 10 to a";

    std::cout << "Result value of b after adding to a : " << b << std::endl;
    std::cout << "Result value of a after adding to a : " << a << std::endl;

    b += 10;

    std::cout << "adding 10 t0 b";

    std::cout << "Result value of b after adding to b : " << b << std::endl;
    std::cout << "Result value of a after adding to b : " << a << std::endl;


    return 0;

}