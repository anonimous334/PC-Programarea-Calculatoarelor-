#include <stdio.h>
int main()
{
	int n,v[100],i,j,x,min,poz;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&v[i]);
	for(i=1;i<=n-1;i++){
		min=v[i];
		poz=i;
		for(j=i+1;j<=n;j++)
			if(v[j]<min)
		{

		min=v[j];
		poz=j;
		}
		if(poz!=j)
		{
		x=v[i];
		v[i]=v[poz];
		v[poz]=x;
		}
	}
	for(i=1;i<=n;i++)
		printf("%d ", v[i]);
	
	return 0;
}
