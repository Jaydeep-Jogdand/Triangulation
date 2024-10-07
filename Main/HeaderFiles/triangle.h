#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "point.h"

class Triangle {
public:
    Point vertex1, vertex2, vertex3;

    Triangle();
    Triangle(const Point& v1, const Point& v2, const Point& v3);

    // Method to print triangle vertices for .dat file format
    void print(std::ofstream& outFile) const;
};

#endif
