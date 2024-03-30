#include <chrono>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec(5000000000LL, 1); // 5 x 10^9 elements
    
    // Getting start time
    auto start = std::chrono::high_resolution_clock::now();

    // Reading from array
    long long read_sum = 0;
    for(long long i = 0; i < 5000000000LL; ++i) {
        read_sum += vec[i];
    }

    // Write to array
    for(long long i = 0; i < 5000000000LL; ++i) {
        vec[i] = i % 256;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> float_ms = end - start;
    std::cout << "Memory Benchamrk completed in " << float_ms.count()/1000 << " seconds." << std::endl;

    return 0;

}