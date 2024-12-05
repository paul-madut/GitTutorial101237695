#include "File.h"
#include <iostream>

File::File(std::string &name, std::string &content, Date &date)
    : name(name), content(content), lastModified(date)
{
}


bool File::lessThan(File &other) const
{
    return lastModified.lessThan(other.lastModified);
}

void File::print() const
{
    std::cout << "File: " << name << "\nDate added: ";
    lastModified.print();
}

void File::printContents() const
{
    print();
    std::cout << "Content: " << content << std::endl;
}

std::string File::getName() const
{
    return name;
}
