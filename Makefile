
GCC46=/opt/gcc-4.6
CC=$(GCC46)/bin/g++-4.6
OPTS=--std=c++0x -g -Wl,-rpath -Wl,$(GCC46)/lib64 -L$(GCC46)/lib64

all: test_n2442_string_literals test_n2927_lambdas test_n2431_nullptr test_n2347_enums test_threading test_n2930_foreach

clean:
	rm test_*

test_n2431_nullptr: src/n2431_nullptr.cc
	$(CC) $(OPTS) $? -o $@

test_n2347_enums: src/n2347_enums.cc
	$(CC) $(OPTS) $? -o $@

test_n2927_lambdas: src/n2927_lambdas.cc
	$(CC) $(OPTS) $? -o $@

test_n2442_string_literals: src/n2442_string_literals.cc
	$(CC) $(OPTS) $? -o $@

test_threading: src/threading.cc
	$(CC) $(OPTS) -lpthread $? -o $@

test_n2930_foreach: src/n2930_foreach.cc
	$(CC) $(OPTS) $? -o $@

