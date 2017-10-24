#include <stdio.h>
#include <stdlib.h>

#define MAX 10

typedef struct heap {
	int elementos[MAX];//numero de elementos
	int last;
} Heap;

int minValor(Heap h);
void insereValor(Heap *h, int n);
void criaHeap(Heap *h);
void imprimeHeap(Heap h);
//"rotações"