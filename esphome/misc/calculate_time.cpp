#include "calculate_time.h"

time_t days_since_unix(const char *date_from) {
  struct tm t;
  strptime(date_from, "%Y-%m-%d %H:%M", &t);
  time_t t2 = mktime(&t);
  time_t now = time(0);
  time_t calc_time_since = (intmax_t)now - (intmax_t)t2;

  return calc_time_since / 60 / 60 / 24;
};

