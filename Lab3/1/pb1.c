#include <stdio.h>
int main()
{
	int n,i,j,max=0,select;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		int sum=0;
		for(j=2;j<=i/2;j++)
			if(i%j==0)
				sum+=j;
		if(sum>max)
		{
			max=sum;
			select=i;
		}
	}
	printf("%d",select);
	return 0;
}	
