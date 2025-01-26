#include <stdio.h>

FILE *fptr;
FILE *wptr;

int main(int argc, char *argv[]) {

    fptr = fopen("GfgTest.txt", "w");

    char dataToBeWritte[50] = "hnbtgrgbhgtr" "bgrerfgbrf";
    
 
    fprintf(fptr,"%s", dataToBeWritte);
    fclose(fptr);



    return 0; 
}
