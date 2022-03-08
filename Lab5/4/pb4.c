#include <stdio.h>
 
int main() {

    int n, s;
    int best = -999999, sum = 0,i;
    scanf("%d",&n);
    for ( i = 1; i <= n; i++) {
        scanf("%d",&s);
        if (sum < 0)
            sum = s;
        else
            sum += s;
        if (best < sum)
            best = sum;
    }

	printf("%d", best);   

    return 0;
}
