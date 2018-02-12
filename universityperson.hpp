#ifndef UNIVERSITYPERSON_HPP
#define UNIVERSITYPERSON_HPP

class UniversityPerson {
private:
  std::string name;
  int id;
protected:
  std::string email;
public:
  UniversityPerson();
  UniversityPerson(std::string name, int id);
  std::string get_name();
  int get_id();
  friend bool operator==(const UniversityPerson& p1, const UniversityPerson& p2);
};

bool operator==(const UniversityPerson& p1, const UniversityPerson& p2);

#endif
