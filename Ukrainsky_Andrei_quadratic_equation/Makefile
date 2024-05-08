CC = gcc
CPPFLAGS = -I$(Windows Kits) -I$(INCLUDE)

.PHONY: all clean check
all: test

test.o: test.c quadratic_equation.h
	$(CC) $(CPPFLAGS) -c -o $@ $<

test: test.o quadratic_equation.o
	$(CC) $(CPPFLAGS) -o $@ $^ -lm

quadratic_equation.o: quadratic_equation.c quadratic_equation.h
	$(CC) $(CPPFLAGS) -c -o $@ $<

clean:
	rm -f *.o test

check: test
	./test