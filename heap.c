#include "heap.h"

int minValor(Heap h){
	return h.elementos[1];
}
void insereValor(Heap *h, int n){ // TESTE n = 2 i = 1 -- n = 3 i =2 
	int i, aux, pai;
	h->elementos[h->last] = n;
	i = h->last;// i = 1
	pai = i/2; //pai = 0
	while(pai>0 && i>0){ //F & T
		if (h->elementos[i] < h->elementos[pai]){ //Troca de pai e filho
			aux = h->elementos[pai];
			h->elementos[pai]=h->elementos[i];
			h->elementos[i] = aux;
		}
		i = pai; //Atualziado quem é o filho
		pai = i/2;//Atualliza quem é pai
	}
	h->last++;//Da espaço para mais um elemento
	return;
}
void criaHeap(Heap *h){ //Inicia o vetor om indice 1
	h->last = 1;
	return;
}
void imprimeHeap(Heap h){
	for (int i=1; i<=(h.last - 1); i++){//Não acessar o vetor "previmente" criado
		printf("%d - ", h.elementos[i]); // 2 - 3
	}
	return;
}