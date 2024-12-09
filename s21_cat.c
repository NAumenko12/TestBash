#include "cat_flags.h"

int main(int argc, char **argv){
    CatFlags flags = {0};
    parce_cat_flags(argc,argv,&flags);
    if (optind == argc){
        print_with_flags(stdin, flags);
    }
    else{
        for(int i = optind ;i<argc ;i++){
            FILE *file = fopen(argv[i],"r");
            if(!file){
                printf("n/a");
                continue;
            }
            print_with_flags(file,flags);
            fclose(file);
        }
    }
    return 0;
}
