#include "EmployeeFile.h"


EmployeeFile::EmployeeFile(const std::string &fileName) : fileName(fileName) {}


bool EmployeeFile::openFile() {
    return true;
}

std::list<std::string> EmployeeFile::readFile() {
   std::list<std::string> result;
   result.push_back("396660");
   result.push_back("42790265");
   return result;
}