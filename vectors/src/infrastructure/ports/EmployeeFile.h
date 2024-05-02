#ifndef EMPLOYEE_FILE_H
#define EMPLOYEE_FILE_H
#include <string>
#include <list>

class EmployeeFile {

public:
    explicit EmployeeFile(const std::string &fileName);
    bool openFile();
    std::list<std::string> readFile();

private:
    std::string fileName;
};

#endif