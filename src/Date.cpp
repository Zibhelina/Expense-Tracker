#include "../include/Date.h"
#include <iostream>
#include <sstream>
#include <stdexcept>
#include <string>

bool Date::is_date_valid(const std::string &date) {
  // Split the date string into its components
  std::stringstream ss(date);
  std::string day_str, month_str, year_str;
  std::getline(ss, day_str, '/');
  std::getline(ss, month_str, '/');
  std::getline(ss, year_str);

  // Checks if components have been extracted successfully
  if (!ss.eof()) {
    return false;
  }

  // Convert components to integers
  int day, month, year;
  try {
    day = std::stoi(day_str);
    month = std::stoi(month_str);
    year = std::stoi(year_str);
  } catch (const std::invalid_argument) {
    return false;
  }

  if (year < 1) {
    return false;
  }

  if (month < 1 || month > 12) {
    return false;
  }
}
