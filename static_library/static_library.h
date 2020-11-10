#ifndef __STATIC_LIBRARY__
#define __STATIC_LIBRARY__
#define MAX 100

struct memoria *endsheap[MAX];

struct memoria
{
    void *dado;
    int contagemRef;
};

void dump();

void *malloc2(int tamanho);

typedef void *pontGenerico;

void atrib2(pontGenerico *p1, pontGenerico *p2);

#endif ///static_library
