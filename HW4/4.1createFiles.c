#include <stdio.h>

FILE *fptr;
FILE *wptr;

int main(int argc, char *argv[]) {

    fptr = fopen("hello.txt", "w");

 
    fprintf(fptr, "Hello\nHow are you\nMy name is Vlad\nWhat is your name\n");
    fclose(fptr);



    return 0; 
}
