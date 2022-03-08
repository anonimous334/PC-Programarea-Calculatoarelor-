#include <stdio.h>
int k;
int nrofdig(int x)
{
	if(x>0)
	{
		x/=10;
		k++;
		return nrofdig(x);
	}
	else
		return k;
}
int main()
{
	int a;
	int b;
	scanf("%d",&a);
	if(a!=0)
	{
	b=nrofdig(a);
	printf("%d",b);
	}
	else
	printf("1");
	
	return 0;
}
