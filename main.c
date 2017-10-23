#include "heap.h" 

int main() {
	criaHeap(h); //Verificar se está correto 
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
			int aux = minHeap(h);
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
