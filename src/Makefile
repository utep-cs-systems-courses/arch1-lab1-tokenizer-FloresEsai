OBJS= tokenizer.o uimain.o history.o


all:uimain


uimain:$(OBJS)

	cc -o uimain $(CFLAGS) $(OBJS)


$(OBJS): tokenizer.h history.h


clean:
	rm -f *.o uimain

run: uimain
	./uimain