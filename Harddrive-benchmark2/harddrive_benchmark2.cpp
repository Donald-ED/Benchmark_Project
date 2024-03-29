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

    // Writing to file
    std::ofstream outfile(filename, std::ofstream::binary);
    for (int i = 0; i < 100000; ++i){
        outfile.write(writeBuffer.data(), writeBuffer.size());
    }
    outfile.close();

    // Reading from file
    std::ifstream infile(filename, std::ifstream::binary);
    while (infile.read(readBuffer.data(), readBuffer.size())) {
        // Simualting process
    }

    infile.close();
}