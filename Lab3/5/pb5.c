#include <stdio.h>
int main()
{

	int n,p=0;
	scanf("%d",&n);
	int aux=n;
	while(aux>0)
	{
		p=p*10+aux%10;
		aux/=10;
	} 
	if(n==p)
		printf("PALINDROM");
	else
		printf("NU E PALINDROM");
	return 0;
}
