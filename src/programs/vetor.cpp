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

int main(){
	int v[MAX_TAM];
	int n;

	scanf("%d", &n);

	if(n > MAX_TAM){
		printf("Tamanho maximo do vetor excedido\n");
		return 1;
	}
	
	le_vetor(v, n);
	imprime_vetor(v, n);

	return 0;
}
