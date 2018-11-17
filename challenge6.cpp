// abundant number
#include <iostream>
#include <iterator>
#include <map>
#include <numeric>
#include <vector>

#include "algo.h"

//returns a map of numbers and their factors (prime numbers will not be in the list)
auto reverseFactorsSieve(unsigned int limit){
    std::map<unsigned int, std::vector<unsigned int>> factors;
    for(auto i = 2u; i < limit/2; ++i) {
        if(factors.find(i + i) == factors.end()){
            factors[i + i] = {1};
        }
        for(auto j = i+i; j < limit; j += i) {
            factors[j].push_back(i);
        }
    }

    return factors;
}

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