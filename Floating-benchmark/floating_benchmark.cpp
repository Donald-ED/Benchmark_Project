#include <chrono>
#include <iostream>

int main() {
    // getting the stat time
    auto start = std::chrono::high_resolution_clock::now();

    // 10^10 additions
    double sum = 0.0;
    for (long long i = 0; i < 10000000000LL; i++) {
        sum += 1.0;
    }

    
}
