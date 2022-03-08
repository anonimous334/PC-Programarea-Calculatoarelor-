#include <stdio.h>
int a, b,primi, prims;
int prim(int x)
{
	int i,f=1;	
	for(i=2;i<x/2;i++)
		if(x%i==0)
			f=0;
	return f;
}
void lookinf(int n)
{
	int i;	
	for(i=n;i>0;i--)
	{
		if(prim(i)==1)
		{
			primi=i;
			break;
		}
	a++;	
	}
}
void looksup(int n)
{
	int i;	
	for(i=n;i<2*n;i++)
	{
		if(prim(i)==1)
		{
			prims=i;
			break;
		}
	b++;	
	}
}
int main()
{
	int n;	
	while(n>0)
	{
		scanf("%d",&n);
		lookinf(n);
		looksup(n);
		if(a==b)
			{	
				if(n!=primi && n>0)				
				{printf("%d %d \n",primi,prims);a=0;b=0;}	
				else
				{a=0;b=0;printf("\n");};
			}
		if(a<b)
			{	printf("%d \n",primi);a=0;b=0;	}
		if(a>b)	
			{	printf("%d \n",prims);a=0;b=0;	}
	}

}
