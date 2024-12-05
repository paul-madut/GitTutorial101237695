
#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include <iomanip>
#include "Date.h"

using namespace std;


class File {
		
	public:
		//constructor
		File(const string& name, const string& content,  const Date& date);
		~File();
		
		//copy constructor
		File(const File&);
		bool lessThan(const File&) const;
		bool equals(const File&) const;

		std::string getName() const;
		
		//other
		void print() const;
		void printContents() const;
	
	private:
		const Date& lastModified;
		string name;
		string content;
	
};
#endif
