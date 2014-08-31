CC= g++
CFLAGS= -std=c++0x
all: exe
exe: test.o
	$(CC) $(CFLAGS) test.o
test.o: test.cpp 
	$(CC) $(CFLAGS) test.cpp 
clean:
	rm -rf *o exe
