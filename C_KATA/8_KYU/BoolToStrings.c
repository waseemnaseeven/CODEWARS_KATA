#include <stdbool.h>

const char *bool_to_word (int value)
  {
  char * Y = "Yes";
  char * N = "No";
  
  if (value >= 1)
    {
    return (Y);
  }
  else
    {
    return (N);
    
  }
  
 
}