#ifndef JOURNAL_ENTRY_H
#define JOURNAL_ENTRY_H

#include <string>

enum class Entry_Type { EXPENSE, REVENUE };

class Journal_Entry {
public:
  Journal_Entry(const std::string &date, double amount,
                const std::string &category, Entry_Type type);
  // Getters
  int get_ID() const;
  std::string getDate() const;
  double get_amount() const;
  std::string get_category() const;
  Entry_Type get_type() const;

  // Setters - Validate and set properties of Journal_entry
  void set_date(const std::string &date);
  void set_amount();
  void set_category();
  void set_type();

private:
  static std::string id_tracker; // Static variable used to generate unique ID
                                 // for each new entry
  std::string id;
  std::string date;
  double amount;
  std::string category;
  Entry_Type type;

  std::string generate_id_tracker();
};
#endif
