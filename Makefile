CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic

BIN_DIR = bin

BINARIES = $(BIN_DIR)/primo $(BIN_DIR)/vetor $(BIN_DIR)/matriz

.PHONY: all clean

all: $(BINARIES)

clean:
	@echo "Limpando arquivos compilados..."
	@rm -rf $(BIN_DIR)

$(BIN_DIR)/primo: src/programs/primo.cpp
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/vetor: src/programs/vetor.cpp
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/matriz: src/programs/matriz.cpp
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@