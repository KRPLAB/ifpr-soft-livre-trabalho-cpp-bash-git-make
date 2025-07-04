#include <iostream>

#define MAX_D 1000

using namespace std;

void leitura_matriz(int m[MAX_D][MAX_D], int tam){
	for (int i = 0; i < tam; ++i){
		for (int j = 0; j < tam; ++j) {
			cin >> m[i][j];
		}
	}
}

void impressao_matriz(int m[MAX_D][MAX_D], int tam){
	cout << "Matriz\n";
	for (int i = 0; i < tam; ++i){
		for (int j = 0; j < tam; ++j){
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
}

int main(){
	int matriz[MAX_D][MAX_D];
	int n;

	cout << "Dimensoes da matriz:\n";
	cin >> n;

	if (n <= 0 || n > MAX_D){
		cout << "Fora das dimensoes permitidas\n";
		return 1;
	}

	leitura_matriz(matriz, n);
	impressao_matriz(matriz, n);

	return 0;
}
