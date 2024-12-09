#include "cat_flags.h"




/*void print_with_flags(FILE *file, CatFlags flags) {
    int line_number = 0; // Начинаем с 0, чтобы правильно считать строки
    int c;
    int last_char = '\n';

    while ((c = fgetc(file)) != EOF) {
        if (c == '\n') {
            if (flags.show_ends) {
                putchar('$'); // Выводим символ конца строки
            }
            putchar('\n');
            line_number++; // Увеличиваем номер строки только здесь
            last_char = c;
            continue;
        }

        // Проверяем, нужно ли выводить номер строки
        if (flags.number_nonblank && last_char == '\n' && c != '\n') {
            printf("%6d\t", line_number + 1); // Увеличиваем на 1, чтобы показать номер текущей строки
        } else if (flags.number_lines && last_char == '\n') {
            printf("%6d\t", line_number + 1); // Увеличиваем на 1, чтобы показать номер текущей строки
        }
        

        // Проверяем, нужно ли выводить символы табуляции
        if (flags.show_tabs && c == '\t') {
            printf("^I");
        } else {
            putchar(c);
        }

        last_char = c; // Обновляем последний символ
    }
}*/
