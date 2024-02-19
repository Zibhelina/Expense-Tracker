#ifndef DATE_H
#define DATE_H
#include <iostream>
class Date {
public:
  Date(const std::string &date);

  std::string get_date();
  void set_date(const std::string &new_date);

private:
  std::string day;
  std::string month;
  std::string year;

  bool is_date_valid(const std::string &date);
};
#endif
