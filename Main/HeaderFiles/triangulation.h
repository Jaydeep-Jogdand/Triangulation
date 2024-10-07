#ifndef TRIANGULATION_H
#define TRIANGULATION_H

#include "triangle.h"
#include <vector>

class Triangulation {
public:
    std::vector<Triangle> triangles;

    void addTriangle(const Triangle& triangle);
    void print(std::ofstream& outFile) const;
};

#endif
