#include <stdint.h>

char *hoop_count(uint32_t n)
{
  char *g = "Great, now move on to tricks"; // initialisation des réponses
  char *k = "Keep at it until you get it";
  if (n >= 10) // conditions
    return (g);
  else
    return (k);
}