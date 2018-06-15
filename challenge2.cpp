// Given two numbers calculate the GCD with them
#include <iostream>
#include <numeric>

// auto gcd(unsigned int n1, unsigned int n2) {
//     if(n1 < n2) { std::swap(n1, n2); }
//     // Euclid algorithm
//     while(auto n3 = n1 % n2) {
//         n1 = n2;
//         n2 = n3;
//     }
//     return n2;
// }
int main() {

    auto firstNumber = 0u;
    auto secondNumber = 0u;

    std::cout << "First Number? ";
    std::cin >> firstNumber;

    std::cout << "Second Number? ";
    std::cin >> secondNumber;

    std::cout << "GCD of the two numbers is " << std::gcd(firstNumber, secondNumber) << "\n";

    return 0;
}