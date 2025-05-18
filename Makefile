CC = gcc
CFLAGS = -Wall -Wextra -g
TARGET = dilci
BISON_SRC = parser.y
FLEX_SRC = lexer.l
BISON_OUT = parser.tab.c parser.tab.h
FLEX_OUT = lex.yy.c
OBJS = parser.tab.o lex.yy.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ -lm

parser.tab.c parser.tab.h: $(BISON_SRC)
	bison -d $<

lex.yy.c: $(FLEX_SRC) parser.tab.h
	flex $<

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(BISON_OUT) $(FLEX_OUT) *.o

.PHONY: all clean