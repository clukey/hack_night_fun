CC = g++

CFLAGS = -Wall -Werror -std=c++11

TARGET = morse
EXTENSION = out
FULL_TARGET = $(TARGET).$(EXTENSION)

all: $(TARGET) $(NEW_TARGET)

$(TARGET): $(TARGET).cpp
	$(CC) $(CFLAGS) -o $(FULL_TARGET) $(TARGET).cpp



clean:
	-rm -f $(FULL_TARGET)
	-rm -rf $(FULL_TARGET).dSYM
