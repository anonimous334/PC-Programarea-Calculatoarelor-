#include <stdio.h>
int main(){

	int a[100],b[100],k1,k2,i;
	scanf("%d",&a[0]);
	scanf("%d",&b[0]);

	k1=a[0];k2=b[0];

	for(i=1;i<=a[0];i++)
		scanf("%d",&a[i]);
	for(i=1;i<=b[0];i++)
		scanf("%d",&b[i]);
	while(k1>0 && k2>0)
	{
		if(k2>k1)
		{
			b[k2]+=a[k1];
			if(b[k2]>10)
			{
				b[k2]-=10;
				b[k2-1]+=1;
			}
			k2--;k1--;
		}
		if(k2<=k1)
		{
			a[k2]+=b[k1];
                        if(a[k2]>10)
                        {
                                a[k2]-=10;
                                a[k2-1]+=1;
                        }
                        k2--;k1--;

		}
		

	}
	
	if(a[0]>b[0])
		for(i=1;i<a[0];i++)
			printf("%d",a[i]);
	if(a[0]<=b[0])
		for(i=1;i<b[0];i++)
			printf("%d",b[i]);


}
