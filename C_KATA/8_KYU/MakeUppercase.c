char *makeUpperCase (char *string)
{
  int i;
  
  i = 0;
  
  if (string[i] >= 32 &&  string[i] <= 64)
        i++;
  
  while (string[i] != '\0')
  {
    if (string[i] >= 97 && string[i] <= 122)
          string[i] -= 32;
    i++;
  }
  
  return (string);
}