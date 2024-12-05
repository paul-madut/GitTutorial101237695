#include "File.h"

File::File(const string& name, const string& content,  const Date& date) 
    : name(name), content(content), lastModified(date) {
    
}

File::File(const File& e): File( e.name, e.content, e.lastModified){  }

File::~File(){}

void File::print() const{
	cout <<"File:          "<<name<<endl;
	cout <<"Last modified: ";
	lastModified.print(); cout<<endl;
}

bool File::lessThan(const File& other) const {
    return name < other.name || (name == other.name && lastModified.lessThan(other.lastModified));
}

bool File::equals(const File& other) const {
    return name == other.name && (!lastModified.lessThan(other.lastModified) && !other.lastModified.lessThan(lastModified));
}

void File::printContents() const{
	print();
	cout <<endl<< content<<endl<<endl;
}

std::string File::getName() const{
	return name;
}