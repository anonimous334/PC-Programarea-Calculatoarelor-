#include <stdio.h>
int euclid(int a, int b)
{
    int c;
    while (b) {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int main()
{
	int n,x,old,cmm=1;
	scanf("%d",&n);
	scanf("%d",&old);
	for(int i=1;i<=n-1;i++)
	{
		scanf("%d",&x);
		cmm=euclid(x,old);
		old=x;
	}
	printf("%d",cmm);
}
