#include <stdio.h>
#include <stdlib.h>

typedef struct heap {
	int elementos[MAX];
	int topo;
} Heap;

int minValor(Heap h);
void insereValor(Heap *h, int n);
void criaHeap(Heap *h);
void imprimeHeap(Heap h);
//"rotações"