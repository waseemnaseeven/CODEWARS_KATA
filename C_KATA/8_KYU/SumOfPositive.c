#include <stddef.h>

int positive_sum(const int *values, size_t count)
  {
  unsigned long i = 0;
  int sum = 0;
  if (values[i] == 0)
       sum = 0;
  while (i < count)
    {
    if (values[i] > 0)
        sum += values[i];
        i++;
  }
  return (sum);
}