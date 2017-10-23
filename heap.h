#include <stdio.h>
#include <stdlib.h>

#define MAX 100

typedef struct heap {
	char elementos[MAX];
	int topo;
} Heap;

Help create();
int minValor(Heap h);
void insereValor(Heap *h, int n);
void criaHeap(Heap *h);
void imprimeHeap(Heap h);