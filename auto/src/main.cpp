#include <cstdio>
#include <iostream>
#include <typeinfo>
#include "src/main.h"
#include <vector>
#include <functional>
#include <algorithm>


using namespace std;


constexpr int nums[] = { 1, 2, 33, 4, 5 };
constexpr const char * strs[] = { "one", "two", "three", "four", "five" };

int i = 47;
const char *cstr = "this is a c-string";
string strobj("this is a string class string");
const string sclass = string("this is a string class string");
    
auto x = string("this is a string class string");
decltype(x) y;


template <typename T>
constexpr T pi = T(3.141592653589793285L);


template <typename T>
T maxOf(const T &a, const T &b) {
    return (a > b ? a : b);
}

template <typename lT, typename rT>
auto tf(const lT &lhs, const rT &rhs) {
    return lhs + rhs;
}


int main(int argc, char *argv[]) {

    if (argc < 3) {
        // report version
        std::cout << argv[0] << " Version " << Auto_VERSION_MAJOR << "." 
        << Auto_VERSION_MINOR << std::endl;
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
  
    cout << "type of i is " << typeid(i).name() << endl;
    cout << "type of cstr is " << typeid(cstr).name() << endl;
    cout << "type of sclass is " << typeid(sclass).name() << endl;
    cout << "type of x is " << typeid(x).name() << endl;
    cout << "type of y is " << typeid(y).name() << endl;
    
    std::cout<<std::endl;

    auto z = tf<string, const char*>(sclass, cstr);
    std::cout<<" z is "<<z<< std::endl;


    std::cout<<"vector" <<std::endl;

    std::vector<int> vi(6);

    auto av = vi.begin();
    for (int xx=0; xx<9; xx++) {
        vi.push_back(xx);
    }
 
    for (std::vector<int>::iterator it = vi.begin(); it!= vi.end(); it++) {
        std::cout<< "vi *it[" << *it << "]" << " &it [" << &it << "]" <<std::endl; 
    }

    int four = 4;
    int res = four << 1;
    std::cout<<"four -> "<<four<<" res -> "<<res<<std::endl;
    std::cout<<"four << 1 = "<<(four <<1 )<<" res -> "<<res<<std::endl;
    std::cout<<"four >> 1 = "<<(four >> 1 )<<std::endl;
    int dword = 512;
    std::cout<<"dword & 0xff = "<<(dword & 0xff )<<std::endl;


    // initialize vector of int
    vector<int> nums = {1, 20, 3, 89, 2};

    // sort the vector in descending order
    sort(nums.begin(), nums.end(), greater<int>());

    for(auto num: nums) {
        cout << num << ", ";
    }
    std::cout<<std::endl;

    return 0;   
}