#!/bin/bash

TEST_DIR="./matriz"
mkdir -p "$TEST_DIR"

TIMESTAMP=$(date +%Y%m%d%H%M%S)
INPUT_FILE="$TEST_DIR/test-$TIMESTAMP-matriz.in"
OUTPUT_FILE="$TEST_DIR/test-$TIMESTAMP-matriz.out"

MATRIZ_SIZE=$(( RANDOM % 4 + 2 ))

echo "$MATRIZ_SIZE" > "$INPUT_FILE"

generate_and_print_matriz() {
    local size=$1
    for (( i=0; i<size; i++ )); do
        local row_elements=()
        for (( j=0; j<size; j++ )); do
            ELEMENT=$(( RANDOM % 100 ))
            row_elements+=("$ELEMENT")
        done
        echo "${row_elements[@]}"
    done
}

generate_and_print_matriz "$MATRIZ_SIZE" >> "$INPUT_FILE"

generate_and_print_matriz "$MATRIZ_SIZE" >> "$INPUT_FILE"

OPERATIONS=("a" "s" "m")
RANDOM_OP_INDEX=$(( RANDOM % ${#OPERATIONS[@]} ))
OPERATION=${OPERATIONS[$RANDOM_OP_INDEX]}
echo "$OPERATION" >> "$INPUT_FILE"

echo "Arquivo de teste para matriz.cpp gerado em: $INPUT_FILE"
echo "Conteúdo:"
cat "$INPUT_FILE"

../bin/matriz < "$INPUT_FILE" > "$OUTPUT_FILE"
