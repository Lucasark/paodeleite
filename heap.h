#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX 10 // Tamanho maximo da Arvore Heap

typedef struct heap {
	int elementos[MAX];//numero de elementos
	int last;//Representação do Ultimo elemento
} Heap;

int minValor(Heap h); // Menor Valor
void insereValor(Heap *h, int n); // Inserir valor
void criaHeap(Heap *h); // Criar Heap
void imprimeHeap(Heap h); // Imprimir o vetor do Heap
void heapfy(int i, int n, Heap *h); // Fazer o Heapfy -> Saber sobre o "n" deve ser ponteiro?