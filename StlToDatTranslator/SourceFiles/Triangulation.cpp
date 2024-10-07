#include "Triangulation.h"
#include <unordered_map>
#include <iostream>
#include <sstream>

void Triangulation::processString(const std::string& data)
{
    std::istringstream iss(data);
    double value;
    int currentIndex = 0;

    while (iss >> value) {
        // Check if the vertex is already in the map
        if (vertexIndexMap.find(value) == vertexIndexMap.end()) {
            // If not, add it to the map and assign a new index
            vertexIndexMap[value] = currentIndex;
            uniqueVertices.push_back(value);
            currentIndex++;
        }
    }
}

std::vector<Triangle> Triangulation::createTriangles(const std::string& data) {
    std::vector<Triangle> triangles;
    std::istringstream iss(data);
    std::vector<int> indices;  // To store the indices of the vertex points

    double val;
    while (iss >> val) {
        indices.push_back(vertexIndexMap[val]);  // Use the index from the map

        // Every 9 coordinates represent 3 vertices of a triangle
        if (indices.size() == 9) {
            Point p1(uniqueVertices[indices[0]], uniqueVertices[indices[1]], uniqueVertices[indices[2]]);
            Point p2(uniqueVertices[indices[3]], uniqueVertices[indices[4]], uniqueVertices[indices[5]]);
            Point p3(uniqueVertices[indices[6]], uniqueVertices[indices[7]], uniqueVertices[indices[8]]);
            triangles.emplace_back(p1, p2, p3);
            indices.clear();
        }
    }
    return triangles;
}

