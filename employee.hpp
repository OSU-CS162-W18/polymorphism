#include "universityperson.hpp"

#ifndef __EMPLOYEE_HPP
#define __EMPLOYEE_HPP

class Employee : public UniversityPerson {
private:
  std::string title;
  float pay_rate;
public:
  Employee(std::string name, int id, std::string title, float pay_rate, std::string email);
  float get_pay_rate();
  float get_monthly_pay(float hours_worked);
  friend void give_raise(Employee& employee, float percent_raise);
};

void give_raise(Employee& employee, float percent_raise);

#endif
