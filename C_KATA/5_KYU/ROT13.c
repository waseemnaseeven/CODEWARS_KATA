#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *rot13 (char *str_out, const char *str_in)
{
  int i = 0;
  while (str_in[i])
  {
    str_out[i] = str_in[i];
    i++;
  }
  //printf("%s", str_out);
  i = 0;
  int len = strlen(str_in);
  while (str_out[i] && i < len)
  {
    if(str_out[i]>= 'A' && str_out[i]<= 'Z') 
         str_out[i] = 'A' + (str_out[i] - 'A' + 13) % 26;
    else if (str_out[i] >= 'a' && str_out[i] <= 'z')
          str_out[i] = 'a'+ (str_out[i] - 'a'+ 13) % 26;
    i++;
  }
  //printf("%s\n", str_out);
  str_out[i]='\0';
  return str_out;
}