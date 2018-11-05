#include "prime.h"
#include <iostream>

int main() {
    auto limit =0u;
    std::cout << "Enter in your limit: ";
    std::cin >> limit;    

    std::cout << *sieve(limit).rbegin() << "\n";
    return 0;
}