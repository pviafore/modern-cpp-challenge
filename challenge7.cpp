//amicable numbers

#include <iostream>
#include <iterator>
#include <numeric>

#include "algo.h"
#include "prime.h"

bool isAmicableNumber(unsigned int number, const std::map<unsigned int, std::vector<unsigned int>> & factors) {
    const auto &firstFactors = factors.at(number);
    const auto sum = std::accumulate(firstFactors.begin(), firstFactors.end(), 0u);
    if(sum > number && sum < 1'000'000 && factors.find(sum) != factors.end()) {
        const auto& secondFactors = factors.at(sum);
        return (number == std::accumulate(secondFactors.begin(), secondFactors.end(), 0u));
    }
    return false;

}

int main(){
    const auto factors = reverseFactorsSieve(1'000'000);
    const auto pairToString = [](auto p){return std::to_string(p.first) + " " + std::to_string(std::accumulate(p.second.begin(), p.second.end(), 0u));};
    transform_if(factors,
                 std::ostream_iterator<std::string>(std::cout, "\n"),
                 pairToString,
                 [&factors](auto p){ return isAmicableNumber(p.first, factors);});
    
}