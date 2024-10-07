#include "filereader.h"
#include <fstream>
#include <sstream>
#include <iostream>

Triangulation FileReader::readSTL(const std::string& filename) {
    std::ifstream inFile(filename);
    Triangulation triangulation;

    if (!inFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return triangulation;
    }

    std::string line;
    Point vertices[3];
    int vertexIndex = 0;

    while (std::getline(inFile, line)) {
        std::stringstream ss(line);
        std::string word;
        ss >> word;

        if (word == "vertex") {
            double x, y, z;
            ss >> x >> y >> z;
            vertices[vertexIndex++] = Point(x, y, z);

            if (vertexIndex == 3) {
                triangulation.addTriangle(Triangle(vertices[0], vertices[1], vertices[2]));
                vertexIndex = 0;  // Reset for next triangle
            }
        }
    }

    inFile.close();
    return triangulation;
}
