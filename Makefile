CC = gcc
CFLAGS = -Wall

.PHONY = run
.PHONY = exe 

app: example/main.c src/node.c src/binary_tree.c
	mkdir -p bin
	$(CC) $(CFLAGS) example/main.c src/binary_tree.c src/node.c -o bin/main -lraylib -lm -lpthread -ldl -lrt -lX11


run: app
	./bin/main

exe:
	./bin/main
