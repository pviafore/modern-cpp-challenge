// abundant number
#include <iostream>
#include <iterator>
#include <numeric>

#include "algo.h"
#include "prime.h"


bool isAbundant(const std::pair<unsigned int, std::vector<unsigned int>>& p) {
    const auto &[n, factors] = p;
    return std::accumulate(factors.begin(), factors.end(), 0u) > n;

}

int main() {
    std::cout << "Please input a limit: ";
    auto limit = 0u;
    std::cin >> limit;

    const auto factors = reverseFactorsSieve(limit);
    transform_if(factors, 
                 std::ostream_iterator<unsigned int>(std::cout, " "), 
                 [](auto p) { return p.first; },
                 isAbundant);
}