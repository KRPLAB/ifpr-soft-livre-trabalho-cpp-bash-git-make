#!/bin/bash

TEST_DIR="./vetor"
mkdir -p "$TEST_DIR"

TIMESTAMP=$(date +%Y%m%d%H%M%S)

INPUT_FILE="$TEST_DIR/test-$TIMESTAMP-vetor.in"
OUTPUT_FILE="$TEST_DIR/test-$TIMESTAMP-vetor.out"

VECTOR_SIZE=$(( RANDOM % 10 + 1 ))

VECTOR_ELEMENTS=""
for ((i=0; i<VECTOR_SIZE; i++ )); do
    ELEMENT=$(( RANDOM % 100 ))
    VECTOR_ELEMENTS="$VECTOR_ELEMENTS $ELEMENT"
done

VECTOR_ELEMENTS=$(echo "$VECTOR_ELEMENTS" | xargs)

echo "$VECTOR_SIZE" > "$INPUT_FILE"
echo "$VECTOR_ELEMENTS" >> "$INPUT_FILE"

echo "Arquivo de teste para vetor.cpp gerado em: $INPUT_FILE"
echo "Conteúdo:"
echo "$VECTOR_SIZE"
echo "$VECTOR_ELEMENTS"

../bin/vetor < "$INPUT_FILE" > "$OUTPUT_FILE"
