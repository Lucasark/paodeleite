#include "heap.h"

int minValor(Heap h){//Retorna o menor valor O(1) 
	if (h.last == 0){
		return -1;
	}
	else return h.elementos[1];
}
void insereValor(Heap *h, int n){//Recursivo??? O(logn)
	h->last++;
	h->elementos[h->last] = n;
	heapfy(h->last, h->elementos[h->last], &h);
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
	for (int i=1; i<=h.last; i++){
		printf("%d\n", h.elementos[i]);
	}
	return;
}

void heapfy(int i, int n, Heap *h){//Heapfy{Quantidade de elemento,Termo a ser analisado,Heap}
	if (n >= h->elementos[i/2]) return; //filho > pai
	else{ //Senão sobe o filho
		aux = n;
		n = h->elementos[i/2];
		h->elementos[i/2] = aux;
		heapfy(sqrt(i), h->elementos[i/2], &h);
	}
	return;
}