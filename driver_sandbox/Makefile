
PLUGIN=walk_gimple.so
SOURCES=\
        walk_gimple.cc \
		$(END)

# Common makefile to be included from all other makefiles

# Where we installed gcc and its headers

INSTALLDIR=/usr/

CC=$(INSTALLDIR)/bin/gcc
CXX=$(INSTALLDIR)/bin/g++

# arm plug in directory
#directory of gcc-arm-8.2-2019.01-x86_64-aarch64-linux-gnu.tar.xz
TOOLCHAINDIR = xxx
PLUGINDIR=$(TOOLCHAINDIR)/lib/gcc/aarch64-linux-gnu/6.2.1/plugin

CXXFLAGS=-std=gnu++11 -fPIC -Wall -g -fno-rtti -I$(PLUGINDIR)/include

# This is a side effect of using C++11
CXXFLAGS+=-Wno-literal-suffix

LDFLAGS=
LDADD=

END=
OBJECTS=$(patsubst %.cc,%.o,$(SOURCES))

all: $(PLUGIN)

$(PLUGIN): $(OBJECTS)
# 	$(CXX) $(LDFLAGS) -o $@ -shared $+ $(LDADD)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $@ -shared $+ $(LDADD)

%.o: %.cc
	$(CXX) -c -o $@ $(CXXFLAGS) $<


.PHONY: all clean test
clean:
	rm -f $(OBJECTS) $(PLUGIN)


.PHONY: test
test: $(PLUGIN)
	$(TOOLCHAINDIR)/bin/aarch64-linux-gnu-gcc -fplugin=/home/osboxes/Desktop/raspbian-tee/driver_sandbox/walk_gimple.so test.c -o ./test

