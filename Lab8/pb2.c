#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **a, **b, **rez,nr,n,i,j,k;
	scanf("%d", &n);
	a = malloc(n * sizeof(*a));
	for (i = 0; i < n; i++){
		a[i] = calloc(i + 1, sizeof(int));
        for (j = 0; j < n; j++){
			scanf("%d", &nr);
			if (j <= i)
                a[i][j] = nr;
		}
	}
	b=malloc(n * sizeof(*b));
	for (i = 0; i < n; i++){

		b[i] = calloc(n - i, sizeof(int));
		for (j = 0; j < n; j++){
			scanf("%d", &nr);
			if (j >= i)
                b[i][j-i] = nr;
		}
	}
    rez = malloc(n*sizeof(*rez));
	for (i = 0; i < n; i++){
		rez[i] = calloc(n, sizeof(int));
		for (j = 0; j < n; j++)
			for (k = 0; k < n; k++)
                if(k <= i && j>=k){
                    rez[i][j]= rez[i][j]+a[i][k]*b[k][j-k];

        }
	}
    for (i=0;i<n;i++){

		for (j=0;j<n;j++)
			printf("%d \t", rez[i][j]);
		printf("\n");
	}
    for (i=0;i<n;i++){

		free(a[i]);
		free(b[i]);
		free(rez[i]);
	}
    free(a);
	free(b);
	free(rez);


    return 0;
}
