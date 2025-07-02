#include <cstdio>

#define MAX_TAM 1000

int main(){
	int v[MAX_TAM];
	int n;

	scanf("%d", &n);

	if(n > MAX_TAM){
		printf("Tamanho maximo do vetor excedido\n");
		return 1;
	}

	for(int i = 0; i < n; i++)
		scanf("%d", &v[i]);

	for(int j = 0; j < n; j++)
		printf("%d ", v[j]);

	printf("\n");

	return 0;
}
