#include <iostream>

#include "universityperson.hpp"
#include "employee.hpp"
#include "instructor.hpp"

int main(int argc, char const *argv[]) {
  UniversityPerson person("Luke Skywalker", 933111111);
  Employee employee("Darth Vader", 933666666, "Director of HR", 31.50, "darth@oregonstate.edu");
  Instructor instructor("Princess Leia", 933222222, "Instructor", 1000000, "leia@oregonstate.edu", 9);

  std::cout << "person: " << person.get_name() << "\t" << person.get_id()
    << std::endl;
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;

  std::cout << "instructor: " << instructor.get_name() << "\t" << instructor.get_id()
    << "\tmonthly pay: " << instructor.get_monthly_pay() << std::endl;

  give_raise(employee, 0.05);
  std::cout << "employee: " << employee.get_name() << "\t" << employee.get_id()
    << "\tmonthly pay: " << employee.get_monthly_pay(160) << std::endl;


  if (person == employee) {
    std::cout << "People are the same" << std::endl;
  } else {
    std::cout << "People are NOT the same" << std::endl;
  }
  return 0;
}
