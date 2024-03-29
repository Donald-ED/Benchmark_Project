#include <chrono>
#include <iostream>
#include <fstream>
#include <vector>

int main() {
    const std::string filename = "Harddrive-benchmark1/temp_file.bin";
    std::vector<char> writebuffer(100, 'A'); // 100 bytes of 'A'
    std::vector<char> readbuffer(100); // 100 bytes for reading

    // Getting start time
    auto start = std::chrono::high_resolution_clock::now();

}