#include <iostream>

#define MAX_D 1000

using namespace std;

int main() {
    int matriz[MAX_D][MAX_D];
    int n;

	cout << "Dimensoes da matriz:\n";
	cin >> n;

	if (n <= 0 || n > MAX_D) {
		cout << "Fora das dimensoes permitidas\n";
		return 1;
	}

	
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cin >> matriz[i][j];
		}
	}

	cout << "Matriz\n";
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << matriz[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
