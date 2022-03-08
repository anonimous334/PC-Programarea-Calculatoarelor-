#include <stdio.h>
int palind(int x)
{
	int p=0;	
	while(x>0)
	{
		p*=10;
		p+=x%10;
		x/=10;	
	}
	return p;
}
int main()
{
	int nr,aux,f=0;
	scanf("%d",&nr);
	while(f==0)
	{
		if(nr==palind(nr))
		{
			aux=nr;
			f=1;	
		}
		else
			nr++;
	}
	printf("%d",aux);
	return 0;
}
