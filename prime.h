#include <map>
#include <vector>

auto sieve(unsigned int limit) {
    std::vector<unsigned int> candidates(limit, 1u, std::vector<unsigned int>::allocator_type());
    std::vector<unsigned int> out(limit, std::vector<unsigned int>::allocator_type()); 
    for(auto i = 3u; i < limit; i += 2){
       if(candidates[i] == 0) { continue; }
        out.push_back(i);
        for(auto j = 2*i; j < limit; j += i) {
            candidates[j] = 0u;
        }
    }

    return out;
}

//returns a map of numbers and their factors (prime numbers will not be in the list)
auto reverseFactorsSieve(unsigned int limit){
    std::map<unsigned int, std::vector<unsigned int>> factors;
    for(auto i = 2u; i < limit/2; ++i) {
        for(auto j = i+i; j < limit; j += i) {
            if(factors.find(j) == factors.end()) {
                factors[j] = {1};
            }
            factors[j].push_back(i);
        }
    }

    return factors;
}