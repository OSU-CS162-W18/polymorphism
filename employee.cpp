#include <iostream>

#include "employee.hpp"

Employee::Employee(std::string name, int id, std::string title, float pay_rate, std::string email) :
  UniversityPerson(name, id), title(title), pay_rate(pay_rate) {
    this->email = email;
}

Employee::~Employee() {
  std::cout << "In Employee destructor" << std::endl;
}

float Employee::get_pay_rate() {
  return this->pay_rate;
}

float Employee::get_monthly_pay(float hours_worked) {
  return hours_worked * this->pay_rate;
}
