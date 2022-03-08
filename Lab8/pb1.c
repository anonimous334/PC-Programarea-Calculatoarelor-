#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int *v,n,i,j,aux,max;
	scanf("%d %d", &n, &max);
	v = malloc(n*sizeof(int));

	for (i = 0; i < n; i++)
		v[i]=rand()%max;
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
	for (i = 0; i < n-1; i++)
		for (j = i+1; j < n; j++)
			if (v[i] > v[j])
			{
				aux=v[i];
				v[i]=v[j];
				v[j]=aux;
			}
	for (i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
	return 0;
}
