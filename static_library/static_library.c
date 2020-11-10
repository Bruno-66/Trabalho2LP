#include <stdio.h>
#include <stdlib.h>
#include "static_library.h"

int ultPos = 0;

void reorganizarEndsHeap(int pos)
{
    for(int i = pos; i < ultPos; i++)
    {
        if((i+1) < MAX)
            endsheap[i] = endsheap[i+1];
    }
}

void dump()
{
    for(int i = 0; i < ultPos; i++)
    {
       if(endsheap[i]->contagemRef == 0)
        {
            free(endsheap[i]);
            reorganizarEndsHeap(i);
            ultPos--;
            printf("Memoria Liberada\n");
        }
    }
}

void *malloc2(int tamanho)
{
    struct memoria *m = malloc(sizeof(tamanho+sizeof(int)));
    m->contagemRef = 1;
    endsheap[ultPos] = m;
    ultPos++;
    return m;
}

void atrib2(pontGenerico *p1, pontGenerico *p2) //p1 aponta para o mesmo conteudo q p2 aponta
{
    if(p2 != NULL)
        ((struct memoria*)*p2)->contagemRef++;
    if(p1 != NULL)
        ((struct memoria*)*p1)->contagemRef--;
    *p1 = *p2;
}
