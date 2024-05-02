#include <cstdio>
#include <iostream>
#include "src/main.h"
#include "domain/model/Employee.h"
#include <ctime>
#include "helpers/Utils.h"
#include "infrastructure/ports/EmployeeFile.h"
#include <list>
#include <string>

using namespace std;



int main(int argc, char *argv[]) {
    std::cout<<"Hello "<<std::endl;

    if (argc < 2) {
        // report version
        std::cout << argv[0] << " Version " << Vector_VERSION_MAJOR << "." 
        << Vector_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    std::string dobString = "2024-04-30";

    try {
        // Convert string to time_t using Utils class
        std::time_t dob = Utils::convertStringToTime(dobString);

        // Output the result
        std::cout << "Date of Birth: " << std::asctime(std::localtime(&dob));

        Employee emp("396660", "JOSE", "DE PAZ", dob);

        const std::time_t dobie = emp.GetDob();
        // Accessing dob via getter
        std::cout << "Date of Birth (via getter): " << std::asctime(std::localtime(&dobie));


    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    EmployeeFile empFile("employee.csv");
    std::cout<<" Was opened? " <<empFile.openFile()<<std::endl;
    for(auto item: empFile.readFile()) {
        std::cout<<"Entry value: "<<item<<std::endl;
    }

    std::list<std::string>::iterator it;
    auto empFileRead = empFile.readFile();

    for (it = empFileRead.begin(); it != empFileRead.end(); it++) {
        std::cout<<" entry : "<<*it<<std::endl;
    }

    return 0;    
}