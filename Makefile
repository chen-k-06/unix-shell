CC = gcc 
CFLAGS = -Wall -Wextra -g 
SRC =  $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = shell

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean: 
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean
