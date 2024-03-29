#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>

int main() {

    const std::string filename = "Harddrive-benchmark1/temp_file.bin";
    std::vector<char> writeBuffer(100, 'A'); // 100 bytes of 'A'
    std::vector<char> readBuffer(100); // 100 bytes for reading

    // Getting start time
    auto start = std::chrono::high_resolution_clock::now();

    // Writing to file
    std::ofstream outfile(filename, std::ofstream::binary);
    for(long long i = 0; i < 10000000; ++i) {
        outfile.write(writeBuffer.data(),  readBuffer.size());

    }
    outfile.close();

    // Reading from file
    std::ifstream infile(filename, std::ifstream::binary);
    while (infile.read(readBuffer.data(), readBuffer.size())){
        // Simulate Processing (to prevent optimizitions that skip reading)
    }
    infile.close();

    // End timer
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "Hard drive Benchmark 1 completed in " << duration.count()/1000 << " seconds." << std::endl;

    return 0;
}