
CC=~/gcc-4.6-20101106/bin/g++-4.6
OPTS=--std=c++0x

all: test_n2431_nullptr test_n2347_enums

clean:
	rm test_*

test_n2431_nullptr: src/n2431_nullptr.cc
	$(CC) $(OPTS) $? -o $@

test_n2347_enums: src/n2347_enums.cc
	$(CC) $(OPTS) $? -o $@
