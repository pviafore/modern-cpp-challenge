// Given two numbers calculate the least common multiple with them
#include <iostream>
#include <numeric>

// auto lcm(unsigned int n1, unsigned int n2) {
//     if(n1 < n2) { std::swap(n1, n2); }
//     auto n3 = n1;
//     for(; n3 % n2 != 0; n3 += n1) {}
//     return n3;
//}
int main() {

    auto firstNumber = 0u;
    auto secondNumber = 0u;

    std::cout << "First Number? ";
    std::cin >> firstNumber;

    std::cout << "Second Number? ";
    std::cin >> secondNumber;

    std::cout << "LCM of the two numbers is " << std::lcm(firstNumber, secondNumber) << "\n";

    return 0;
}