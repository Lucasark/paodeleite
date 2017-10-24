#include "heap.h" 

int main() {
	Heap h;
	criaHeap(&h); //Verificar se está correto 
	char op;
	int k;
	do {
		scanf("%c", &op); 
		if (op == 'I') { // I - Inserir
			scanf("%d", &k);
			insereValor(&h, k);
		}
		if (op = 'M'){ // M - Menor (Raiz)
			printf("\n -------------------\n");
			printf("%d \n", minHeap(h));
			printf("\n -------------------\n");
		}
		if (op = 'P'){ // P - Mostrar Pilha (Arvore)
			printf("\n -------------------\n");
			ImprimeHeap(h);
			printf("\n -------------------\n");
		}
	} while(op != 'S');
	system("pause");
	return 0;
}
