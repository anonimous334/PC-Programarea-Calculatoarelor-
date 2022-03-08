#include <stdio.h>
int aux;
int power(int a,int b)
{
	if(b>1)
	{
		a*=aux;
		return power(a,b-1);
	}
	else
	return a;
}

int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	aux=x;
	x=power(x,y);
	printf("%d",x);
	return 0;
}
