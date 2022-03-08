#include <stdio.h>
#include <math.h>
int main()
{
	int s1,s2,n;
	printf("Please enter a number:\n");
	scanf("%d",&n);
	s1=n*(n+1)/2;
	s2=n*(n+1)*(2*n+1)/6;
	printf("The first sum is: %d \n",s1);
	printf("The second sum is: %d",s2);
	return 0;
}
