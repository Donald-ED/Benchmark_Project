#include <chrono>
#include <iostream>

int main() {
    // Getting the start time
    auto start = std::chrono::high_resolution_clock::now();

    // 10^10 additions
    double sum = 0.0;
    for (long long i = 0; i < 10000000000LL; i++) {
        sum += 1.0;
    }

    // 5 x 10^9 Multiplications
    double product = 1.0;
    for (long long i = 0; i < 5000000000LL; i++) {
        product *= 2.0;
    }

    // 2 x 10^9 Divisions
    double quotient = 100.0;
    for (long long i = 0; i < 2000000000LL; i++) {
        quotient /= 2.0;
    }
    
    // Getting the end time
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> float_ms = end - start;

    std::cout << "64-bit Floating Point Operation Benchmark completed in " << float_ms.count() / 1000 << " seconds." << std::endl;

    return 0;
}
