#!/bin/bash

TEST_DIR="./matriz"
mkdir -p "$TEST_DIR"

TIMESTAMP=$(date +%Y%m%d%H%M%S)
INPUT_FILE="$TEST_DIR/test-$TIMESTAMP-matriz.in"
OUTPUT_FILE="$TEST_DIR/test-$TIMESTAMP-matriz.out"

MATRIZ_SIZE=$(( RANDOM % 4 + 2 ))

echo "$MATRIZ_SIZE" > "$INPUT_FILE"

gerador_matrix() {
    local size=$1
    local matriz_output=""
    for (( i=0; i<size; i++ )); do
        local row_elements=""
        for (( j=0; j<size; j++ )); do
            ELEMENT=$(( RANDOM % 100 ))
            row_elements="$row_elements $ELEMENT"
        done
        matrix_output+="$(echo "$row_elements" | xargs)\n"
    done
    echo -e "$matriz_output" # O -e permite a interpretação de \n
}

MATRIZ1=$(gerador_matrix "$MATRIZ_SIZE")
echo -e "$MATRIZ1" >> "$INPUT_FILE"

# Gera a segunda matriz
MATRIZ2=$(gerador_matrix "$MATRIZ_SIZE")
echo -e "$MATRIZ2" >> "$INPUT_FILE"

# Gera uma operação aleatória (a, s, m)
OPERATIONS=("a" "s" "m")
RANDOM_OP_INDEX=$(( RANDOM % ${#OPERATIONS[@]} ))
OPERATION=${OPERATIONS[$RANDOM_OP_INDEX]}
echo "$OPERATION" >> "$INPUT_FILE"

echo "Arquivo de teste para matriz.cpp gerado em: $INPUT_FILE"
echo "Conteúdo:"
echo "$MATRIX_SIZE"
echo -e "$MATRIX1"
echo -e "$MATRIX2"
echo "$OPERATION"

../bin/matriz < "$INPUT_FILE" > "$OUTPUT_FILE"
