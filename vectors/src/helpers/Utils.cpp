#include "Utils.h"
#include <sstream>
#include <iomanip>

std::time_t Utils::convertStringToTime(const std::string& dateString) {
    std::tm tm = {};
    std::istringstream ss(dateString);
    ss >> std::get_time(&tm, "%Y-%m-%d");

    if (ss.fail()) {
        // Parsing failed
        throw std::runtime_error("Failed to parse date string");
    }

    // Convert tm to time_t
    return std::mktime(&tm);
}