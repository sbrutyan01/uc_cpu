CC = gcc
CFLAGS = -Wall -Wextra -std=c99

TARGET = main
SRCS = main.c std_logic_gates/std_logic_gates.c macro_logic_elements/mux.c
OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: all clean