#pragma once
#include <string>
#include <vector>
#include "Triangle.h"
#include<unordered_map>

class Triangulation {
public:
	std::unordered_map<double, int> vertexIndexMap;
	std::vector<double> uniqueVertices;
	void processString(const std::string& data);
	std::vector<Triangle> createTriangles(const std::string& data);
};
