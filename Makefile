CC = gcc

CFLAGS = -Wall -lm

TARGET = parens
EXTENSION = out
FULL_TARGET = $(TARGET).$(EXTENSION)

all: $(TARGET) $(NEW_TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(FULL_TARGET) $(TARGET).c



clean:
	-rm -f $(FULL_TARGET)
	-rm -rf $(FULL_TARGET).dSYM
