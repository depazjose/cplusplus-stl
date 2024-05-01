#ifndef EMPLOYEE_H
#define EMPLOTEE_H

#include <string>
#include <ctime>

class Employee 
{
    private:
      std::string id;
      std::string name;
      std::string last_name;
      std::time_t dob;    

    public:
      explicit Employee(const std::string &id, const std::string &name, const std::string &last_name, time_t dob);

      void SetId(const std::string id);
      void SetName(const std::string name);
      void SetLastName(const std::string last_name);
      void SetDob(time_t );

      std::string GetId () const;
      std::string GetName() const;
      std::string GetLastName() const;
      std::time_t GetDob() const;

};

#endif //EMPLOYEE_H