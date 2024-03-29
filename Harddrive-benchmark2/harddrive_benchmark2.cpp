#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    const std::string filename = "Harddrive2/temp_file_large_bin";
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

    // End timer and calculate duration
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;

    std::cout << "Hard Drive Benchmark 2 completed in " << duration.count() << " seconds." << std::endl;

}