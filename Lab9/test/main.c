#include <stdio.h>
#include <stdlib.h>

int main()
{
    //VIDEO 2 = BASIC + ARITMETICA CU POINTERI

    int a = 3;

    int * p = &a;

    printf("%p\n", &a);
    printf("%p\n", p);


    printf("%d\n", a);
    *p = 12;
    printf("%d\n", a);

    int b = 20;
    *p = b;
    printf("%d\t%p\n", *p, p);

    printf("%p\n", p);
    printf("%p\n", p+1); //e de tip int. size of int = 4. p+1 = adresa + 4

    char c = 's';
    char *char_pointer = &c;
    printf("%p\t%p\n", char_pointer, char_pointer+1);

    //VIDEO 3

    a = 1025;
    int *int_p = &a;
    char *char_p =  (char *)&a;
    // 1025 = 00000000 00000000 00000100 00000001
    printf("%d\t%d\t",*int_p, *char_p);
    printf("%d\n", *(char_p + 1));

    void *void_p;
    void_p = &a;
    printf("%p\n", void_p);

    //VIDEO 4

    int x = 45;
    int *px = &x;
    int **pp = &px;

    printf("%d %p %p\n", *px, *pp, &x);




    return 0;
}
