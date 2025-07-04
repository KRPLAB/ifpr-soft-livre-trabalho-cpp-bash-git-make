# ifpr-cc-livre-trabalho-cpp-bash-git-make

Este repositório contém a resolução do trabalho prático proposto para a disciplina de **Sistemas de Software Livre** do curso de Bacharelado em Ciência da Computação, no Instituto Federal do Paraná (Campus Pinhais). O objetivo principal é a implementação de programas em C++ utilizando Git para controle de versão, Make para automação da compilação e Bash para gerenciamento de testes.

## Integrantes do Grupo

* Kauan da Rosa Paulino
* Kamilli Bach Alves dos Santos

## Descrição dos Programas

O trabalho consiste na implementação de três programas em C++:

1.  **`primo.cpp`**: Um programa que lê um número inteiro da entrada padrão e imprime "Primo" se o número for primo, ou "Não é primo" caso contrário.
    * **Exemplo de uso:**
        ```bash
        $ ./primo
        4
        Não é primo
        $ ./primo
        5
        Primo
        $ cat test1-primo.in
        $ ./primo < test1-primo.in
        Primo
        $
        ```

2.  **`vetor.cpp`**: Um programa que lê um número inteiro `n` (tamanho do vetor) e, em seguida, `n` números inteiros que são os elementos do vetor. O programa deve imprimir o maior valor presente no vetor.
    * **Exemplo de uso:**
        ```bash
        $ ./vetor
        4
        5 3 7 1
        7
        $
        $ cat tests/vetor/test1-vetor.in
        $ ./vetor < tests/vetor/test1-vetor.in
        9
        $
        ```

3.  **`matriz.cpp`**: Uma calculadora de matrizes que lê um número inteiro `n` (tamanho das matrizes `n x n`), seguido por duas matrizes `n x n`. Posteriormente, lê uma letra que indica a operação (`a` para adição, `s` para subtração, `m` para multiplicação). O programa realiza a operação e imprime a matriz resultante.
    * **Exemplo de uso:**
        ```bash
        $ ./matriz
        2
        2 3
        3 3
        1 4
        6 5
        a
        3 7
        9 8
        $
        ```

## Como Compilar os Programas

Utilizamos `make` para automatizar a compilação. O `Makefile` está configurado para compilar os programas com as opções `-Wall -Werror -Wextra -pedantic`.

* **Compilar um programa específico:**
    ```bash
    make primo    # Compila apenas primo.cpp, gerando o executável 'primo'
    make vetor    # Compila apenas vetor.cpp, gerando o executável 'vetor'
    make matriz   # Compila apenas matriz.cpp, gerando o executável 'matriz'
    ```

* **Compilar todos os programas:**
    ```bash
    make all      # Compila todos os programas (primo, vetor, matriz)
    ```

* **Remover executáveis e arquivos temporários:**
    ```bash
    make clean    # Limpa os executáveis e arquivos objeto gerados
    ```

## Estrutura do Repositório
```
.
├── bin
├── Makefile
├── README.md
├── src
│   ├── docs
│   │   └── orientacoes-trabalho.pdf
│   └── programs
│       ├── matriz.cpp
│       ├── primo.cpp
│       └── vetor.cpp
└── tests
    ├── generate-test-matriz.sh
    ├── generate-test-primo.sh
    ├── generate-test-vetor.sh
    ├── matriz
    │   ├── test-DATADECRIACAO-matriz.in
    │   └── test-DATADECRIACAO-matriz.out
    ├── primo
    │   ├── test-DATADECRIACAO-primo.in
    │   └── test1-DATADECRIACAO-primo.out
    └── vetor
        ├── test1-DATADECRIACAO-vetor.in
        └── test1-DATADECRIACAO-vetor.out

```

* `src/programs`: Contém os arquivos-fonte em C++.
* `src/docs`: Contém o pdf com orientações de como deve-se fazer o projeto.
* `tests/`: Contém os scripts para geração de casos de teste e subdiretórios com exemplos de entradas (`.in`) e saídas geradas (`.out`).
* `Makefile`: O arquivo para automação da compilação.
* `README.md`: Este arquivo, com informações sobre o projeto.
* `.gitignore`: Arquivo para ignorar arquivos gerados pelo sistema de controle de versão (Git) e arquivos compilados.
* `bin/`: Diretório onde os executáveis compilados são colocados.

## Scripts Shell para Geração de Testes

Foram criados três scripts shell para gerar casos de teste para cada programa:

* **`generate-test-primo.sh`**: Gera uma entrada de teste para o programa `primo.cpp` e a respectiva saída.
* **`generate-test-vetor.sh`**: Gera uma entrada de teste para o programa `vetor.cpp` e a respectiva saída.
* **`generate-test-matriz.sh`**: Gera uma entrada de teste para o programa `matriz.cpp` e a respectiva saída.

Para executar um script de geração de teste, navegue até o diretório `tests/` e execute:

```bash
./generate-test-primo.sh
