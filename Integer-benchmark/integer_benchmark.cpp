#include <chrono>
#include <iostream>

int main() {
    // Getting start time
    auto start = std::chrono::high_resolution_clock::now();

    // 10^10 additions
    int sum = 0;
    for(long long i = 0; i < 10000000000LL; ++i) {
        sum += 1; // Simple addition
    }

    // 5 x 10^9 multiplications
    int product = 1;
    for(long long i = 0; i < 5000000000LL; ++i) {
        product *= 2;
    }

    // 2 x 10^9 divisions
    int quotient = 100;
    for (long long i = 0; i < 2000000000LL; ++i) {
        quotient /= 2;
    }
}