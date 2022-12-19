EXEC = ciro_test
SRC = src
SOURCES = $(wildcard $(SRC)/*.c)
OBJECTS = $(SOURCES:.c=.o)
FLAGS = -g -Wall -Werror -Wextra -pedantic
CC = clang
BIN = bin

$(BIN)/$(EXEC): $(OBJECTS)
	$(CC) $(OBJECTS) $(FLAGS) -o $(BIN)/$(EXEC)

run:
	./bin/ciro_test

clean:
	rm bin/nfile src/*.o
