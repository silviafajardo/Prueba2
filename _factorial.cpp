#include <iostream>

int main(){

    long long int num, factorial;

    std::cout << "Introduce un número: ";
    std::cin >> num;

    if (num == 0)
        factorial = 1;
    else
        factorial = num;

    while (num>2) {
          num = num-1;
          factorial = factorial*num;
          }

    std::cout << "El factorial es: " << factorial << std::endl;


    return 0;
    }
