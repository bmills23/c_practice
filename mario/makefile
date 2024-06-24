# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Werror

# Source files
# SRCS = $(wildcard *.c) <-- This will compile all .c files in the directory
SRCS = mario.c ../compare_function/functions.c

INCLUDES = -I../compare_function

# Object files
OBJS = $(SRCS:.c=.o)

# Output executable
# When using make, use the target name to compile the program
TARGET = mario

# Default rule
all: $(TARGET)

# Linking
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

# Compilation
%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean
