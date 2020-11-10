#include <stdio.h>
#include "static_library.h"

int main()
{
    int *v = malloc2(sizeof(int));
    int *b = malloc2(sizeof(int));
    *v = 10;
    *b = 2;
    printf("End de V: %d Valor: %d\n", v, *v);
    printf("End de B: %d Valor: %d\n", b, *b);
    atrib2(&v, &b);
    printf("End de V: %d Valor: %d\n", v, *v);
    printf("End de B: %d Valor: %d\n", b, *b);
    dump();
    printf("End de V: %d Valor: %d\n", v, *v);
    printf("End de B: %d Valor: %d\n", b, *b);

    return 0;
}
