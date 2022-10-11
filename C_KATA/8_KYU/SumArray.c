#include <stddef.h>

int sum_array(const int *values, size_t count)
  {
  
  int sum = 0; // return this variable
  int nbr = 6; // number of values on a array
  
  for (int i = 0; i < nbr ; i++)
    {
      nbr = count; 
      sum = sum + values[i];
      
    }
    return sum;
  
  }
