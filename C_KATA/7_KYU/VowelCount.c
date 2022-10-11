#include <stddef.h>

size_t get_count(const char *s)
{
    int count;
    int i;
    
    count = 0;
    i = 0;
    while (s[i] != '\0')
    {
      if (s[i] == 'a')
          count++;
      if (s[i] == 'e')
          count++;
      if (s[i] == 'i')
          count++;
      if (s[i] == 'o')
          count++;
      if (s[i] == 'u')
          count++;
      i++;  
    }
    return count;
}