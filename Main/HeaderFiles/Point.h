#ifndef POINT_H
#define POINT_H

#include<fstream>
class Point {
public:
    double x, y, z;

    Point();
    Point(double x, double y, double z);

    // Method to print the point (for .dat file format)
    void print(std::ofstream& outFile) const;
};

#endif
