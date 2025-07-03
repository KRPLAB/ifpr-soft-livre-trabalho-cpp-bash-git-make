#include <iostream>
#include <vector>  

int main() {
    int linhas, colunas;

    std::cout << " n linhas: ";
    std::cin >> linhas;
    std::cout << "n de colunas: ";
    std::cin >> colunas;

    
    if (linhas <= 0 || colunas <= 0) {
        std::cout << " tem que ser maiores que 0\n"; 
        return 1; 
    }

    std::vector<std::vector<int>> matriz(linhas, std::vector<int>(colunas));

    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            std::cout << "elemento [" << i << "][" << j << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << " Matriz\n";
    for (int i = 0; i < linhas; ++i) {
        for (int j = 0; j < colunas; ++j) {
            
            std::cout << matriz[i][j] << "\t"; 
        }
        std::cout << std::endl; 
    }

    return 0; 
}