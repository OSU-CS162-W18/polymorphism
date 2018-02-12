#include <iostream>
#include "instructor.hpp"

Instructor::Instructor(std::string name, int id, std::string title, float salary,
  std::string email, int appt_length) : Employee(name, id, title, salary, email), appt_length(appt_length) {}

Instructor::~Instructor() {
  std::cout << "In Instructor destructor" << std::endl;
}

float Instructor::get_monthly_pay(float hours_worked) {
  return this->get_pay_rate() / this->appt_length;
}


float Instructor::get_monthly_pay() {
  return this->get_pay_rate() / this->appt_length;
}
