#!/bin/bash

TEST_DIR="./primo"
mkdir -p "$TEST_DIR"

TIMESTAMP=$(date +%Y%m%d%H%M%S)

INPUT_FILE="$TEST_DIR/test-$TIMESTAMP-primo.in"
OUTPUT_FILE="$TEST_DIR/test-$TIMESTAMP-primo.out"

RANDOM_NUMBER=$(( RANDOM % 1000 + 1 ))

echo "$RANDOM_NUMBER" > "$INPUT_FILE"

echo "Arquivo de teste para primo.cpp gerado em: $INPUT_FILE"
echo "Conteúdo: $RANDOM_NUMBER"

../bin/primo < "$INPUT_FILE" > "$OUTPUT_FILE"
