#include <stdio.h>

FILE *fptr;
FILE *wptr;

int main(int argc, char *argv[]) {


    wptr = fopen("GfgTest.txt", "r");


    char dataToBeWritte[100]; 
    while (fgets(dataToBeWritte, 100, wptr)) {
        printf("%s", dataToBeWritte); 
    }

    fclose(wptr);

    return 0; 
}
