#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    const std::string filename = "temp_file_large_bin";
    std::vector<char> writeBuffer(10000, 'B'); // 10,000 bytes of 'B'
    std::vector<char> readBuffer(10000, 'B'); // 10,000 bytes for reading

    // Start time
    auto start = std::chrono::high_resolution_clock::now();

}