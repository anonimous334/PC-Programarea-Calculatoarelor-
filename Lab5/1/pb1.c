#include <stdio.h>
int main()
{
	int v[100];
	int n,i,mx,mn,pmax=0,k=0;
	float s;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);
		s+=v[i];
	}
	
	mx=v[0];mn=v[0];s/=n;

	for(i=0;i<n;i++){
		if(mx<v[i])
			{mx=v[i];pmax=i;}
		if(mn>v[i])
			mn=v[i];
		if(v[i]>s)
			k++;
	}
	
	printf("min = %d\n ", mn);
	printf("poz_max = %d\n", pmax);
	printf("ma = %.2f\n", s);
	printf("gt_ma = %d\n", k);

	return 0;
}
