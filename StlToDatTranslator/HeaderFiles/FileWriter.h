#pragma once
#include <vector>
#include <string>
#include "Triangle.h"

class FileWriter {
public:
    FileWriter();
    void writeFile(const std::string& filename, const std::vector<Triangle>& triangles);
    ~FileWriter();
};