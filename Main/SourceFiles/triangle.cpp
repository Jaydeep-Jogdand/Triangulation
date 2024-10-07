#include "triangle.h"
#include <fstream>

Triangle::Triangle() {}

Triangle::Triangle(const Point& v1, const Point& v2, const Point& v3)
    : vertex1(v1), vertex2(v2), vertex3(v3) {}

void Triangle::print(std::ofstream& outFile) const {
    vertex1.print(outFile);
    vertex2.print(outFile);
    vertex3.print(outFile);
    outFile << std::endl; // Separate each triangle with a blank line
}
