#pragma once
#ifndef FILEREADER_H
#define FILEREADER_H

#include "triangulation.h"
#include <string>

class FileReader {
public:
    static Triangulation readSTL(const std::string& filename);
};

#endif
