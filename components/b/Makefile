CFLAGS := --coverage
LDFLAGS := --coverage

SRCS := $(wildcard src/*.c)
OBJS := $(SRCS:%.c=build/%.o)
BIN := build/bin

.PHONY: all run coverage

all: $(BIN)

run: all
	$(BIN)

build/%.o : %.c
	-mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN): $(OBJS)
	$(CC) $^ $(LDFLAGS) -o $@

coverage:
	gcovr --root ../../ . -f '.*\.c' --json -o coverage.json
