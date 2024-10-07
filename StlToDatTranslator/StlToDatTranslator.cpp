#include <iostream>
#include "FileRead.h"
#include "Triangulation.h"
#include "FileWriter.h"

int main() {
    FileRead reader;
    reader.readFile("cube.stl");

    Triangulation triangulizer;
    triangulizer.processString(reader.data);

    std::vector<Triangle> triangles = triangulizer.createTriangles(reader.data);

    FileWriter writer;
    writer.writeFile("output.dat", triangles);

    std::cout << "Triangles successfully written to output.dat\n";
    return 0;
}