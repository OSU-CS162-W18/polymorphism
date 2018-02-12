#include <iostream>

#include "employee.hpp"

void give_raise(Employee& employee, float percent_raise) {
  employee.pay_rate *= (1.0 + percent_raise);
}

Employee::Employee(std::string name, int id, std::string title, float pay_rate, std::string email) :
  UniversityPerson(name, id), title(title), pay_rate(pay_rate) {
    this->email = email;
  }

float Employee::get_pay_rate() {
  return this->pay_rate;
}


float Employee::get_monthly_pay(float hours_worked) {
  return hours_worked * this->pay_rate;
}
