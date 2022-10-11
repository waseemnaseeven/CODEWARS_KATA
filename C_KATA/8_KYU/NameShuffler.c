char *name_shuffler (char *shuffled, const char *name)
{
  char *first=(char*)malloc(sizeof(char)*strlen(name));
  char *last=(char*)malloc(sizeof(char)*strlen(name));
  sscanf(name,"%s %s", first, last);
  sprintf(shuffled, "%s %s", last, first);
  
  return shuffled;
}