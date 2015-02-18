CC=gcc
CFLAGS=
LDFLAGS=-s -std=c99
EXEC=output
SRC=examples/output.c src/color-sh.c
OBJ=$(SRC:.c=.o)

all: $(SRC) $(EXEC) __clean__

$(EXEC): $(OBJ)
	$(CC) $^ -o $@ $(LDFLAGS)

.c:
	$(CC) $< -o $*.o $(CFLAGS) -c

clean:
	rm -f $(OBJ)
	rm -f $(EXEC)

__clean__:
	rm -f $(OBJ)
