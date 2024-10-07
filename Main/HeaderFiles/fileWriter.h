#ifndef FILEWRITER_H
#define FILEWRITER_H

#include "triangulation.h"
#include <string>

class FileWriter {
public:
    static void writeToDat(const std::string& filename, const Triangulation& triangulation);
};

#endif
