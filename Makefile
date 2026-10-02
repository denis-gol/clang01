#
# only canonical, only hardcore!
#
#=======================================
# VARS
#=======================================
GCC = gcc
CFLAGS = -Wall --std=c11

SRCS = main.c \
       functions.c \
       codewars.c
OBJS = $(SRCS:.c=.o)

TARGET = bin/clang01


#=======================================
# TARGETS
#=======================================

all: CFLAGS += -O2
all: $(TARGET)

# глянем все промежуточные файлы (@todo - можно сложить в отдельную папку)
allf: CFLAGS += -save-temps
allf: $(TARGET)

# сборка под трассировку GDB, дебаг-файлы будут лежать отдельно от бинаря
trace: CFLAGS += -g -O0
trace: $(TARGET)
	objcopy --only-keep-debug $(TARGET) $(TARGET).debug
	strip --strip-debug bin/clang01
	objcopy --add-gnu-debuglink=$(TARGET).debug $(TARGET)

clean:
	rm -rf bin/
	rm -rf cmake*/
	rm -f $(OBJS)



#=======================================
# RULES
#=======================================
$(TARGET): $(OBJS)
	mkdir -p bin
	$(GCC) $(CFLAGS) $(OBJS) -o $(TARGET)




##all:
##	mkdir -p bin
##	gcc main.c functions.c -o bin/clang01
##
##trace:
##	mkdir -p bin
##	gcc -g -O0 main.c functions.c -o bin/clang01
##	objcopy --only-keep-debug bin/clang01 bin/clang01.debug
##	strip --strip-debug bin/clang01
##	objcopy --add-gnu-debuglink=bin/clang01.debug bin/clang01
##
##clean:
#	rm -rf bin/


.PHONY: all clean trace

