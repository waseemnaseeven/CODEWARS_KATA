#include <stddef.h>

int lenght(char *str)
{
  int i;
  i = 0;
  while(str[i] != '\0')
    {
    i++;
  }
  return(i);
}

size_t str_count(const char *str, char letter) {
  
  int count;
  lenght(str);
  int i;
  
  count = 0;
  i = 0;
  
  if (lenght(str) == 0)
    return (0);
  
  while(str[i] != '\0')
    {
    
    if(str[i] == letter)
      {
      count++;
    }
      
    i++;
    }
  
  return (count);
}