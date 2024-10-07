#pragma once
#include <string>

class FileRead {
public:
    FileRead();
    std::string data;
    void readFile(const std::string& filename);
    ~FileRead();
};