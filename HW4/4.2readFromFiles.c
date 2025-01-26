#include <stdio.h>

FILE *fptr;
FILE *wptr;

int main(int argc, char *argv[]) {


    wptr = fopen("hello.txt", "r");


    char String[100]; 
    while (fgets(String, 100, wptr)) {
        printf("%s", String); 
    }

    fclose(wptr);

    return 0; 
}
