CC		= gcc
CLFAGS	= -Wall

EXCLUSIONS	= 

HDR			= $(wildcard *.h)
SRC			= $(filter-out $(EXCLUSIONS),$(wildcard *.c))
PROGS		= $(patsubst %.c,%,$(SRC))

all: $(PROGS)

%: %.c %.h common.h
	$(CC) $(CFLAGS) -o $@ $<


clean:
	rm -rf $(PROGS)
