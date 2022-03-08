#include<stdlib.h>
#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	srand((unsigned)time(NULL));
	a=rand();
	b=rand();
	c=rand();
	d=rand();
	e=rand();
	printf("%d %d %d %d %d",a,b,c,d,e);

	return 0;
}
