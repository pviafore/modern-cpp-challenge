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