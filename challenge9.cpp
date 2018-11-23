//prime factors
#include <algorithm>
#include <iostream>
#include <iterator>

#include "prime.h"

int main() {
    std::cout << "Enter in a number: ";
    auto number = 0u;
    std::cin >> number;
    const auto primeFactors = getPrimeFactors(number);

    std::copy(primeFactors.begin(),
              primeFactors.end(),
              std::ostream_iterator<unsigned int>(std::cout, " "));

    return 0;
}