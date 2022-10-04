APP = ./app
BIN = ./bin
DOC = ./doc
OBJ = ./obj
SRC = ./src

all: clean folders libed myapps

libed: \
	$(OBJ)/binary_tree.o \
	$(OBJ)/list.o \
	$(OBJ)/stack.o

myapps: \
	$(BIN)/main

$(OBJ)/%.o: $(SRC)/%.c $(DOC)/%.h
	gcc -c $< -I $(DOC) -o $@

$(BIN)/%: $(APP)/%.c
	gcc $< $(OBJ)/*.o -I $(DOC) -o $@

run:
	$(BIN)/main

folders:
	mkdir bin/ obj/

clean: 
	rm -rf bin/ obj/