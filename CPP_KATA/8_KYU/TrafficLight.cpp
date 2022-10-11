#include <string>

std::string update_light(std::string current) 
{
  std::string yellow = "yellow";
  std::string green = "green";
  std::string red = "red";
  
  if (current == green)
      return yellow;
  else if (current == yellow)
      return red;
  else if (current == red)
      return green;
}