CC=gcc
CFLAGS=-Wall -Wextra -O2
TARGET=TomatoVeggie
SRC=TomatoVeggie.c

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)

.PHONY: all clean
