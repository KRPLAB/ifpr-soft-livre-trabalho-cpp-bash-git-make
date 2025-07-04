#include <iostream>

#define MAX_D 100

using namespace std;

void leitura_matriz(int m[MAX_D][MAX_D], int tam) {
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			cin >> m[i][j];
		}
	}
}

void impressao_matriz(int m[MAX_D][MAX_D], int tam) {
	cout << "Matriz\n";
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}
}

void adicao_matrizes(int m1[MAX_D][MAX_D], int m2[MAX_D][MAX_D], int m3[MAX_D][MAX_D], int tam) {
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
}

void subtracao_matrizes(int m1[MAX_D][MAX_D], int m2[MAX_D][MAX_D], int m3[MAX_D][MAX_D], int tam) {
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			m3[i][j] = m1[i][j] - m2[i][j];
		}
	}
}

void multiplicacao_matrizes(int m1[MAX_D][MAX_D], int m2[MAX_D][MAX_D], int m3[MAX_D][MAX_D], int tam) {
	for (int i = 0; i < tam; ++i) {
		for (int j = 0; j < tam; ++j) {
			m3[i][j] = 0;
			for (int k = 0; k < tam; ++k) {
				m3[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}
}

int main() {
	int matriz_1[MAX_D][MAX_D];
	int matriz_2[MAX_D][MAX_D];
	int matriz_3[MAX_D][MAX_D];
	int n;
	char operacao;

	cout << "Dimensoes da matriz:\n";
	cin >> n;

	if (n <= 0 || n > MAX_D) {
		cout << "Fora das dimensoes permitidas\n";
		return 1;
	}

	leitura_matriz(matriz_1, n);
	leitura_matriz(matriz_2, n);

	cin >> operacao;

	if(operacao == 'a'){
		adicao_matrizes(matriz_1, matriz_2, matriz_3, n);
	} else if(operacao == 's'){
		subtracao_matrizes(matriz_1, matriz_2, matriz_3, n);
	} else {
		multiplicacao_matrizes(matriz_1, matriz_2, matriz_3, n);
	}
	
	impressao_matriz(matriz_3, n);

	return 0;
}
