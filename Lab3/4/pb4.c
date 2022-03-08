#include <stdio.h>
#include <math.h>
int main()
{

	int n=5,new=0,k=0,aux;	
	while(n>0)
	{
		scanf("%d",&n);
		aux=n;
		while(aux>0)
		{
			if(aux%10==1)
				new+=pow(2,k);
			k++;
			aux/=10;			
		}
		printf("%d \n",new);	
	}
	return 0;
}
