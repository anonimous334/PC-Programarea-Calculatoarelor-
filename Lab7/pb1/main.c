#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x=1;
  char *y=(char*)&x;

  if(*(char*)&x==1)
        printf("LITTLE-ENDIAN \n");
  else
        printf("BIG-ENDIAN \n");
}
