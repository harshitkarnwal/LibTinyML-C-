CC ?= cc
CFLAGS ?= -O2 -std=c11 -Wall -Wextra -Wpedantic -Iinclude
LDFLAGS ?= -lm
UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Darwin)
SHARED_EXT=dylib
SHARED_FLAGS=-dynamiclib
else
SHARED_EXT=so
SHARED_FLAGS=-shared
endif
LIBSRC=src/quantization.c src/activation.c src/matrix.c src/benchmark.c
OBJ=$(LIBSRC:src/%.c=build/%.o)
PICOBJ=$(LIBSRC:src/%.c=build/%_pic.o)
.PHONY: all static shared demo test benchmark clean
all: static shared demo
build:
	mkdir -p build
build/%.o: src/%.c | build
	$(CC) $(CFLAGS) -c $< -o $@
build/%_pic.o: src/%.c | build
	$(CC) $(CFLAGS) -fPIC -c $< -o $@
static: build/libtinyml.a
build/libtinyml.a: $(OBJ)
	ar rcs $@ $^
shared: build/libtinyml.$(SHARED_EXT)
build/libtinyml.$(SHARED_EXT): $(PICOBJ)
	$(CC) $(SHARED_FLAGS) $^ -o $@ $(LDFLAGS)
demo: build/libtinyml_demo
build/libtinyml_demo: src/main.c build/libtinyml.a
	$(CC) $(CFLAGS) $< build/libtinyml.a -o $@ $(LDFLAGS)
test: build/test_libtinyml
	./build/test_libtinyml
build/test_libtinyml: tests/test_libtinyml.c build/libtinyml.a
	$(CC) $(CFLAGS) $< build/libtinyml.a -o $@ $(LDFLAGS)
benchmark: demo
	./build/libtinyml_demo bench results/results.csv
clean:
	rm -rf build results/results.csv
