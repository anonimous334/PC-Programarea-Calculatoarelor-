#include <stdio.h>
int main()
{
	int n,m,i,j,v[100],w[100],flag;
	scanf("%d", &n); scanf("%d",&m);
	for(i=0;i<n;i++)
		scanf("%d",&v[i]);
        for(i=0;i<m;i++)
                scanf("%d",&w[i]);
	
	for(i=0;i<n;i++){

		flag=1;
		for(j=0;j<m;j++){
		if(v[i]==w[j])
			flag=0;}
		if(flag==1)
			printf("%d ",v[i]);
	}
	return 0;
}
