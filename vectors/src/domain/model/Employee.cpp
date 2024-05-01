#include "Employee.h"


Employee::Employee(const std::string &id, const std::string &name, const std::string &last_name, std::time_t dob) : 
    id(id), name(name), last_name(last_name), dob(dob) {};


void Employee::SetId(const std::string newId) {
    id = newId;
}

void Employee::SetName(const std::string newName) {
    name = newName;
}

void Employee::SetLastName(const std::string newLastName) {
    last_name = newLastName; 
}

void Employee::SetDob(std::time_t dob) {
    this->dob = dob;
}

std::string Employee::GetId () const {
    return id;
}

std::string Employee::GetName() const {
    return name;
}

std::string Employee::GetLastName() const {
    return last_name;
}

std::time_t Employee::GetDob() const {
    return dob;   
}