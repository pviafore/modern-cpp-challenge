// Write a program that calculates and prints the sum of all natural numbers divisible by 3 or 5 up to a limit entered by the user

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main(){
    std::cout << "Please enter in an upper limit (up to 2^32)\n";
    auto limit = 0u;
    std::cin >> limit; 

    auto sum = 0ull;
    for(auto i = 1u; i< limit; ++i){
       if(i%3 == 0 || i%5 == 0) { sum += i; } 
    }
    std::cout << "The sum total is " << sum << "\n";
    return 0;
}