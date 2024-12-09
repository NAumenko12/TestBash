#ifndef SRC_CAT_FLAGS_H_
#define SRC_CAT_FLAGS_H_

#include<stdio.h>
#include<stdbool.h>
#include <getopt.h>
#include<stdlib.h>
#include <string.h>
#include <unistd.h> 

typedef struct {
    bool number_nonblank;  // b
    bool number_lines;    // n
    bool squeeze_blank;   // s
    bool show_ends;       //E
    bool show_tabs;       // T
    bool show_nonprinting;    //v
} CatFlags;

void parce_cat_flags(int args, char **argv, CatFlags *flags);

void print_with_flags(FILE *file, CatFlags flags);

#endif