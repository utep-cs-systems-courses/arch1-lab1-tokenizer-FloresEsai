# List of object files
OBJS = history.o tokenizer.o
OBJS_MAIN = $(OBJS) uimain.o
OBJS_TEST = $(OBJS) tester.o

CFLAGS=-g -O3

# file dependencies
tokenizer.h: tokenizer.o uimain.o
history.h: history.o uimain.o

# user input
tokenizer: $(OBJS_MAIN)
	cc -o tokenizer $(CFLAGS) $(OBJS_MAIN)

all: tokenizer

clean:
	rm -f *.o *.c~ *.h~ *~ *.c# *.h# src

run: tokenizer
	./tokenizer

test: tokenizer_test
	./tokenizer_test