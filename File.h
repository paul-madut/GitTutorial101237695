#ifndef FILE_H
#define FILE_H

#include <string>
#include "Date.h"

class File {
    std::string name;
    std::string content;
    Date& lastModified;

public:
    File( std::string& name,  std::string& content,  Date& date);
    File();
    bool lessThan(File& other) const;
    void print() const;
    void printContents() const;

    std::string getName() const;
};

#endif
