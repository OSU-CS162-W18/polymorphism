#include "employee.hpp"

#ifndef __INSTRUCTOR_HPP
#define __INSTRUCTOR_HPP

class Instructor : public Employee {
private:
  int appt_length;
public:
  Instructor(std::string name, int id, std::string title, float salary, std::string email, int appt_length);
  float get_monthly_pay(float hours_worked);
  float get_monthly_pay();
};

#endif
