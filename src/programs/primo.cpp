#include <iostream>

using namespace std;

bool ehPrimo(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int numero;
    cin >> numero;

    if (ehPrimo(numero)) {
        cout << "Primo" << endl;
    } else {
        cout << "Não é primo" << endl;
    }

    return 0;
}
