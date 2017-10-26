#include "heap.h"

int minValor(Heap h){//Retorna o menor valor O(1) 
	if (h.last == 0){
		return -1;
	}
	else return h.elementos[1];
}
void insereValor(Heap *h, int n){//Recursivo??? O(logn)
	h->elementos[h->last]=n;
	//heapfy(h->topo, h->elementos[h->topo], &h);
	h->last++;
	return;
}
void criaHeap(Heap *h){//???
	h->last = 0;
	return;
}
void imprimeHeap(Heap h){///Imrprime o vetor O(n) - Em ordem cresente;
	if (h.last == 0){
		printf("Arvore vazia\n");
		return;
	} 
	for (int i=1; i>=h.last; i++){
		printf("%d\n", h.elementos[i]);
	}
	return;
}

void heapfy(int i, int n, Heap *h){//Heapfy{Quantidade de elemento,Termo a ser analisado,Heap} 
	return;
}