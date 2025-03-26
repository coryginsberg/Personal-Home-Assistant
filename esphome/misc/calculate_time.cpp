#include "calculate_time.h"
#include <iostream>
#include <string>

time_t days_since_unix(const char *date_from) {
  struct tm tm = {};
  strptime(date_from, "%Y-%m-%dT%H:%M:%S", &tm);
  return mktime(&tm);
};

std::string truncateString(const std::string &s) {
    if (s.size() <= 12)
        return s;
    return s.substr(0, 4) + "..." + s.substr(s.size() - 4);
}