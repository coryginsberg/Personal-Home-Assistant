#include <map>
#include <string>

// Weather icons below are sourced from Google's Material Symbol library
// The conditions below are sourced from `https://github.com/home-assistant/core/blob/cb616cdf4ea1387a3d012547415e26847a1b694e/homeassistant/components/weather/__init__.py#L53-L68
// NOLINTNEXTLINE
std::map<std::string, std::string> weather_icon_map {
  {"clear", "\U0000F157"},
  {"clear-night", "\U0000F159"},
  {"cloudy", "\U0000F15B"},
  {"exceptional", "\U0000E645"},
  {"fog", "\U0000E188"},
  {"hail", "\U0000F67F"},
  {"lightning", "\U0000EC1C"},
  {"lightning-rainy", "\U0000EBDB"},
  {"partlycloudy", "\U0000F172"},
  {"pouring", "\U0000F61F"},
  {"rainy", "\U0000F176"},
  {"snowy", "\U0000E2CD"},
  {"snowy-rainy", "\U0000F61D"},
  {"sunny", "\U0000E81A"},
  {"windy", "\U0000EFD8"},
  {"windy-variant", "\U0000EC0C"},
};