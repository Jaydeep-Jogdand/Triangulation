#include "filereader.h"
#include "filewriter.h"
#include <iostream>

int main() {
    std::string inputFilename = "cube.stl";   // STL file to be read
    std::string outputFilename = "output.dat";  // Output .dat file

    // Read STL file
    Triangulation triangulation = FileReader::readSTL(inputFilename);

    // Write output to .dat file
    FileWriter::writeToDat(outputFilename, triangulation);

    return 0;
}
