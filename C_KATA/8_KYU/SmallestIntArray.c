#include <stddef.h>

int find_smallest_int(const int array[], size_t len)
{
    int min = array[0];
    for (int i = 0; i < len;i++)
    {
      if (array[i] < min)
        min = array[i];
        //printf("%d\n", min);
    }
    return (min);
}