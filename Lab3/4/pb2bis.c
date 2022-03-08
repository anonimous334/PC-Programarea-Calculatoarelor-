#include <stdio.h>
int main()
{
	int n=4,p=0,t=1;
	while(n>0)
	{
	scanf("%d",&n);
	while(t*2<n)t*=2;
	while(t>0)
	{
		if(n>=t)
		{
			p=p*10+1;
			n-=t;
		}
		else	p*=10;
		t/=2;
	}
	printf("%d \n",p);
	}
	return 0;

}

