#include<stdio.h>
#include<stdlib.h>
int main()
{
	float a,b,c;
	printf("Please type the lenghts\n");
	scanf("%f %f %f",&a,&b,&c);
	if(a+b>c && b+c>a && c+a>b)
		printf("DA");
	else
		printf("NU");
	return 0;
}

