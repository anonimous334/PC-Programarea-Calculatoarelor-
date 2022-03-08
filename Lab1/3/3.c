#include <stdio.h>
int main()
{
        int n;
        printf("Please enter number:\n");
        scanf("%d",&n);
        printf("Number in base 8 is: %o \n",n);
        printf("Number in base 10 is: %d \n",n);
        printf("Number in base 16 is: %x \n",n);
        return 0;
}
