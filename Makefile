CC = gcc
CFLAGS = -Wall -Wextra -std=c11
EXE = a1
SRCS = a1.c

all: $(EXE)

$(EXE): $(SRCS)
	$(CC) $(CFLAGS) -o $(EXE) $(SRCS)

clean:
	rm -f $(EXE)

.PHONY: all clean
