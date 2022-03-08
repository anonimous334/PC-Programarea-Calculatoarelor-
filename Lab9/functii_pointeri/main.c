#include <stdio.h>
#include <stdlib.h>

void increment(int *p){

    *p = *p + 1;

}

int sumOfElements(int *pv, int size){

    int i, sum = 0;
    for( i = 0; i < size; i++)
        sum += *(pv+i);
    return sum;
}

int main()
{
    int x = 3;
    increment(&x);
    printf("%d\n", x);

    int v[4];
    v[0] = 0; v[1] = 23; v[2] = 2; v[3] = 3;

    int sum = sumOfElements(&v[0], 4);
    printf("%d", sum);

    return 0;
}
