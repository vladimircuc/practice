#include <stdio.h>
void main (int argc, char *argv[])
{
    int nr;

    printf("write a nr: ");

    scanf("%d", &nr);

    if(nr < 0)
        printf("Negative\n");
    else if (nr > 0)
        printf("Pozitive\n");
    else
        printf("It is 0\n");

    if(nr % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");


    //printf("answer: %d\n", nr > 70 && nr < 85);
}
