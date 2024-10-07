#include "FileWriter.h" // Ensure FileWriter class is included
#include <fstream>
#include <iomanip>
#include <iostream>

FileWriter::FileWriter()
{

}
void FileWriter::writeFile(const std::string& filename, const std::vector<Triangle>& triangles) {
    std::ofstream outfile(filename);
    for (const auto& triangle : triangles) {
        outfile << std::fixed << std::setprecision(6)
            << triangle.p1.x << " " << triangle.p1.y << " " << triangle.p1.z << "\n"
            << triangle.p2.x << " " << triangle.p2.y << " " << triangle.p2.z << "\n"
            << triangle.p3.x << " " << triangle.p3.y << " " << triangle.p3.z << "\n"
            << triangle.p1.x << " " << triangle.p1.y << " " << triangle.p1.z << "\n";
    }
    std::cout << "Written triangles to file: " << triangles.size() << std::endl; // Debug print
}
FileWriter::~FileWriter()
{

}

