#include <cstdio>
#include <iostream>
#include <typeinfo>
#include "src/main.h"
#include "stack.cpp"

using namespace std;


constexpr int nums[] = { 1, 2, 33, 4, 5 };
constexpr const char * strs[] = { "one", "two", "three", "four", "five" };


template <typename T>
constexpr T pi = T(3.141592653589793285L);


template <typename T>
T maxOf(const T &a, const T &b) {
    return (a > b ? a : b);
}


int main(int argc, char *argv[]) {

    if (argc < 3) {
        // report version
        std::cout << argv[0] << " Version " << Stacks_VERSION_MAJOR << "." 
        << Stacks_VERSION_MINOR << std::endl;
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


        try {
        Stack<int> si(5);
        
        cout << "si size: " << si.size() << endl;
        cout << "si top: " << si.top() << endl;
        
        for ( int i : nums ) {
            si.push(i);
        }
        
        cout << "si top after pushes: " << si.top() << endl;
        cout << "si is " << ( si.isFull() ? "" : "not " ) << "full" << endl;
        
        while(!si.isEmpty()) {
            cout << "popped " << si.pop() << endl;
        }
    } catch (StackExeption & e) {
        cout << "Stack error: " << e.what() << endl;
    }
    
    try {
        Stack<string> ss(5);
        
        cout << "ss size: " << ss.size() << endl;
        cout << "ss top: " << ss.top() << endl;
        
        for ( const char * s : strs ) {
            ss.push(s);
        }
        
        cout << "ss top after pushes: " << ss.top() << endl;
        cout << "ss is " << ( ss.isFull() ? "" : "not " ) << "full" << endl;
        
        while(!ss.isEmpty()) {
            cout << "popped " << ss.pop() << endl;
        }
    } catch (StackExeption & e) {
        cout << "Stack error: " << e.what() << endl;
    }
    

    return 0;    
}