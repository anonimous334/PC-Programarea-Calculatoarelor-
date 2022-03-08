#include <stdio.h>
#define NMAX 1005
int binsearch1 (int v[],int n,int a)
{
	int st=1,dr=n,m;
	while(st<=dr)
	{

	m=(st+dr)/2;
	if(v[m]==a)
		return m;
	if(v[m]>a)
		dr=m-1;
	else
		st=m+1;
	}
	if(v[m]<a)
		m++;
	return m;
}

int binsearch2 (int v[],int n,int a)
{
	int st=1,dr=n,m;
	while(st<=dr)
	{

	m=(st+dr)/2;
	if(v[m]==a)
		return m;
	if(v[m]>a)
        	dr=m-1;
	else
        	st=m+1;
}
	if(v[m]>a)
		m--;
	return m;
}



int main()
{	
	int v[NMAX],n,a=0,x,y,b=0,k,ax=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	scanf("%d",&v[i]);
	while(ax>=0)
	{
		scanf("%d",&ax);
		if(ax>=0)
		{
			a=ax;
			scanf("%d",&b);
			x=binsearch1(v,n,a);
			y=binsearch2(v,n,b);
			k=y-x+1;
			if(v[x]>b || v[y]<a)
			k=0;


			printf("\n%d\n",k);	
		}

}
return 0;
}
