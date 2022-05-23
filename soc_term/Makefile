
all: soc_term

OBJS = soc_term.o

CFLAGS += -g -O0

soc_term: $(OBJS)
	gcc -o $@ $<

clean:
	rm -f $(OBJS) soc_term
