#include "prime.h"
#include <iostream>


int main() {
    auto limit =0u;
    std::cout << "Enter in your limit: ";
    std::cin >> limit;    
    auto primes = sieve(limit);
    std::vector<std::pair<unsigned int, unsigned int>> out;
    for(auto prime = primes.begin(); prime < primes.end(); ++prime) {
        for(auto candidate = prime+1; candidate < primes.end(); ++candidate) {
            if(*candidate == *prime + 6) { 
                out.emplace_back(*prime, *candidate);
            }
            if(*candidate > *prime + 6) {
                break;
            }
        }   
    }

    for(auto p: out){
        std::cout << p.first << " " << p.second << "\n";
    }

    return 0;
}