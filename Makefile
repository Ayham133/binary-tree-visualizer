CC = gcc
CFLAGS = -Wall

.PHONY = run
.PHONY = exe 

app: example/main.c src/node.c src/binary_tree.c
	mkdir -p bin
	$(CC) $(CFLAGS) example/main.c src/node.c src/binary_tree.c -o bin/main


run: app
	./bin/main

exe:
	./bin/main
