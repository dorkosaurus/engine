all: main.cc gvector.cc gvector.h
	g++ main.cc gvector.cc
clean:
	rm a.out
