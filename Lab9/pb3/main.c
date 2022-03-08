#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
  char str[100];
  fgets(str,100,stdin);

  char * pch;

  pch = strtok (str," ,.-");

  while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, " ,.-");
  }

  return 0;
}

