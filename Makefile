CC = gcc

CFLAGS = -Wall -lm

TARGET = primes
EXTENSION = out
FULL_TARGET = $(TARGET).$(EXTENSION)

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(FULL_TARGET) $(TARGET).c

debug: $(TARGET).c
	$(CC) $(CFLAGS) -Werror -g -o $(FULL_TARGET) $(TARGET).c

clean:
	-rm -f $(FULL_TARGET)
	-rm -rf $(FULL_TARGET).dSYM
