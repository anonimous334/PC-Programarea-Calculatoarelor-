#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *build_number(int value){

    int i;    char x;   char *nr;

    nr = (char *)malloc((value + 2)* sizeof(char));
    nr[0] = value + 48;

    scanf("%c", &x);

    char temp_nr[100];
    gets(temp_nr);

    for(i = 1; i <= value; i++)
        *(nr+i) = temp_nr[i-1];

    return nr;
}

int main()
{
    int nrcif1, nrcif2;
    scanf("%d", &nrcif1);
    scanf("%d", &nrcif2);

    char *my_nr1;
    char *my_nr2;
    my_nr1 = build_number(nrcif1);
    my_nr2 = build_number(nrcif2);

    puts(my_nr1);
    puts(my_nr2);

    free(my_nr2);
    free(my_nr1);

    return 0;
}
