#include <chrono>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(5000000000LL, 1); // 5 x 10^9 elements
    
    //Getting start time
    auto start = std::chrono::high_resolution_clock::now();

}