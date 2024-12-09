#include "cat_flags.h"

CatFlags ParseFlags(int argc, char **argv){
     CatFlags flags = {0};

     struct option long_options[]={
        {"number-nonblank", no_argument, NULL, 'b'},
        {"number", no_argument, NULL, 'n'},
        {"squeze-blank", no_argument, NULL, 's'},
     };

     int options;
     while ((options = getopt_long(argc,argv,"+bneEstTv", long_options,0)) !=-1){
        switch(options){
            case 'b':
                flags.b =1;
                break;
            case 'n':
                flags.n =1;
                break;
            case 's':
                flags.s =1;
                break;
            case 'e':
                flags.E=1;
                flags.v =1;
                break;
            case 't':
                flags.T =1;
                flags.v =1;
                break;
            default:
                printf("Неизвестная опция");
                exit(1);
            

        }
     }
     return flags;
}






/*void parce_cat_flags(int argc, char **argv, CatFlags *flags) {
    int opt; 
    flags->number_nonblank = false;
    flags->show_ends = false;
    flags->number_lines = false;
    flags->squeeze_blank = false;
    flags->show_tabs = false;
    flags->show_nonprinting = false;

    
    while ((opt = getopt(argc, argv, "bEnsTv")) != -1) {
        switch(opt) {
            case 'b':
                flags->number_nonblank = true;
                break;
            case 'E':
                flags->show_ends = true;
                break;
            case 'n':
                flags->number_lines = true;
                break;
            case 's':
                flags->squeeze_blank = true;
                break;
            case 'T':
                flags->show_tabs = true;
                break;
            case 'v':
                flags->show_nonprinting = true;
                break;
            default:
                fprintf(stderr, "Usage: 21_cat [-bEnsTv] [file..]\n");
                break;
        }
    }
}*/
