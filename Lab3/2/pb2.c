#include <stdio.h>
int main()
{
	int inp=5,i,k,countr=0;
	while(inp>0)
	{
		scanf("%d",&inp);
		k=0;
		for(i=2;i<=inp/2;i++)
		{	;
			if(inp%i==0)
			{
				printf("%d \t",i);k++;
				
			}
						
		}
		if(k==0&&inp>0){	printf("PRIM");countr++;}
		printf("\n");
	}
	printf("s-au gasit %d numere prime",countr);
	return 0;

}
