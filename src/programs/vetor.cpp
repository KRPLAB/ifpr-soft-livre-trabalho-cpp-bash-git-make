#include <cstdio>

#define MAX_TAM 1000

void le_vetor(int *v, int tam){
	for(int i = 0; i < tam; i++)
		scanf("%d", &v[i]);
}

void imprime_vetor(int *v, int tam){
	for(int j = 0; j < tam; j++)
		printf("%d ", v[j]);
	printf("\n");
}

int maior_elemento(int *v, int tam){
	int maior = v[0];

	for (int i = 1; i < tam; i++) {
		if (v[i] > maior)
			maior = v[i];
	}
	return maior;
}

int main(){
	int v[MAX_TAM];
	int n;
	int maior;

	scanf("%d", &n);

	if(n > MAX_TAM){
		printf("Tamanho maximo do vetor excedido\n");
		return 1;
	}
	
	le_vetor(v, n);
	maior = maior_elemento(v, n);

	printf("%d\n", maior);
	return 0;
}
