#include <algorithm>
#include <cmath>
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

bool isArmstrong(unsigned int three_digit_number) {
    auto sum = pow(static_cast<int>(three_digit_number/100), 3) + pow(static_cast<int>((three_digit_number%100)/10), 3) + pow(three_digit_number % 10, 3);
    return static_cast<unsigned int>(sum) == three_digit_number;
}

int main() {

    std::vector<unsigned int> candidates(900, std::vector<unsigned int>::allocator_type());
    std::iota(candidates.begin(), candidates.end(), 100u);
    std::copy_if(candidates.begin(), 
                 candidates.end(), 
                 std::ostream_iterator<unsigned int>(std::cout, " "),
                 isArmstrong);
    return 0;
}