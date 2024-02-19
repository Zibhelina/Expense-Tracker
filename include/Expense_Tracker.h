#ifndef EXPENSE_TRACKER_H
#define EXPENSE_TRACKER_H

#include "Journal_Entry.h"
#include <map>
#include <string>
#include <vector>

class Expense_Tracker {
public:
  Expense_Tracker();
  void add_entry();
  void edit_entry();
  void remove_entry();
  void display_report();

private:
};

#endif
