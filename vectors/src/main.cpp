#include <cstdio>
#include <iostream>
#include "src/main.h"

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

    return 0;    
}