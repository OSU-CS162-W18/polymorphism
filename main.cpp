#include <iostream>
#include <cstdlib>

#include "universityperson.hpp"
#include "employee.hpp"
#include "instructor.hpp"

Employee* get_employee(int n) {
  if (rand() % 2) {
    return new Employee("Some Employee", 933000000 + n, "Title", n * 10.0, "email@oregonstate.edu");
  } else {
    return new Instructor("Some Instructor", 933000000 + n, "Instructor", 10000 * n, "email@oregonstate.edu", 9);
  }
}

int main() {

  Employee employee = Instructor("Princess Leia", 933222222, "Instructor", 1000000, "leia@oregonstate.edu", 9);
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;

  // Instructor instructor = Employee("Darth Vader", 933666666, "Director of HR", 31.50, "darth@oregonstate.edu");

  Employee* employee_ptr = new Instructor("Princess Leia", 933222222, "Instructor", 1000000, "leia@oregonstate.edu", 9);
  std::cout << "employee_ptr: " << employee_ptr->get_name() << "\t" << employee_ptr->get_id()
    << "\tmonthly pay: " << employee_ptr->get_monthly_pay(160) << std::endl;


  Instructor instructor("Princess Leia", 933222222, "Instructor", 1000000, "leia@oregonstate.edu", 9);
  Employee& employee_ref = instructor;
  std::cout << "employee_ref: " << employee_ref.get_name() << "\t" << employee_ref.get_id()
    << "\tmonthly pay: " << employee_ref.get_monthly_pay(160) << std::endl;

  Employee** employees = new Employee*[10];
  for (int i = 0; i < 10; i++) {
    employees[i] = get_employee(i);
  }
  for (int i = 0; i < 10; i++) {
    std::cout << "employees[i]: " << employees[i]->get_name() << "\t" << employees[i]->get_id()
      << "\tmonthly pay: " << employees[i]->get_monthly_pay(160) << std::endl;
  }

  delete employee_ptr;

  return 0;
}
