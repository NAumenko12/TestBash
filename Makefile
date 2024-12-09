CC = gcc
FLAGS = -Wall -Wextra -std=c11
TARGET = s21_cat

all: $(TARGET)

$(TARGET): s21_cat.o cat_flags.o cat_print.o
	$(CC) $(FLAGS) -o $(TARGET) s21_cat.o cat_flags.o cat_print.o

s21_cat.o: s21_cat.c cat_flags.h
	$(CC) $(FLAGS) -c s21_cat.c

cat_flags.o: cat_flags.c cat_flags.h
	$(CC) $(FLAGS) -c cat_flags.c

cat_print.o: cat_print.c cat_flags.h
	$(CC) $(FLAGS) -c cat_print.c

clean:
	rm -f *.o $(TARGET)
