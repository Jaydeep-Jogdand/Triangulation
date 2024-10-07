#include "triangulation.h"
#include <fstream>

void Triangulation::addTriangle(const Triangle& triangle) {
    triangles.push_back(triangle);
}

void Triangulation::print(std::ofstream& outFile) const {
    for (const auto& triangle : triangles) {
        triangle.print(outFile);
    }
}
