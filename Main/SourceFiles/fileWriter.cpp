#include "filewriter.h"
#include <fstream>
#include <iostream>

void FileWriter::writeToDat(const std::string& filename, const Triangulation& triangulation) {
    std::ofstream outFile(filename);

    if (!outFile.is_open()) {
        std::cerr << "Error creating file: " << filename << std::endl;
        return;
    }

    triangulation.print(outFile);

    outFile.close();
    std::cout << "Output successfully written to " << filename << std::endl;
}
