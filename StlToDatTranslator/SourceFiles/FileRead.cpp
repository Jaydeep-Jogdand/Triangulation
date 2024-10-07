#include "FileRead.h"
#include <fstream>
#include <sstream>
#include <iostream>

FileRead::FileRead()
{

}
void FileRead::readFile(const std::string& filename) {
    std::ifstream infile(filename);
    std::string line;
    while (std::getline(infile, line)) {
        std::stringstream ss(line);
        std::string word;
        while (ss >> word) {
            if (word == "vertex") {
                std::string x, y, z;
                ss >> x >> y >> z;
                FileRead::data += x + " " + y + " " + z + " ";
            }
        }
    }
    std::cout << "Read data: " << data << std::endl; // Debug print
}
FileRead::~FileRead()
{

}
