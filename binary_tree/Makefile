CC=gcc
VPATH=src/
CFLAGS= -g -o
OBJS = binary_tree.c main.c 
BUILD= build
INCLUDE=-Iinclude/
OUT = build/main

all: ${OUT}

${BUILD}/main: ${OBJS}
	${CC} $^ ${INCLUDE} ${CFLAGS} ${OUT}

run: ${BUILD}/main
	./build/main

clean:
	rm ./build/main