CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET = a1
SRCS = a1.c

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS)

clean:
	rm -f $(TARGET)

.PHONY: all clean
