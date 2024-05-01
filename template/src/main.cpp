#include <cstdio>
#include <iostream>
#include  <typeinfo>
#include "src/main.h"


using namespace std;


template <typename T>
constexpr T pi = T(3.141592653589793285L);


template <typename T>
T maxOf(const T &a, const T &b) {
    return (a > b ? a : b);
}


int main(int argc, char *argv[]) {

    if (argc < 3) {
        // report version
        std::cout << argv[0] << " Version " << Template_VERSION_MAJOR << "." 
        << Template_VERSION_MINOR << std::endl;
        std::cout << "Usage: " << argv[0] << " number number" << std::endl;
        return 1;
    }

    try {
        auto a0 = argv[1];
        auto a1 = std::stoi(argv[2], nullptr, 0);

        std::cout<<typeid(a0).name()<<" | " <<typeid(a1).name()<<std::endl;

        std::cout<<" The max is:" <<maxOf<int>(atoi(argv[1]), atoi(argv[2])) << std::endl;
     }
     catch (const std::invalid_argument& ia) {
        std::cerr << "Invalid argument: " << ia.what() << '\n';
     }    

    return 0;    
}