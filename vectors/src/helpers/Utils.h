#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <ctime>

class Utils {
public:
    static std::time_t convertStringToTime(const std::string &dateString);
};

#endif // UTILS_H