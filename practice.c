#include <stdio.h>
void main (int argc, char *argv[])
{
    int nr;

    printf("write a temp: ");

    scanf("%d", &nr);

    printf("answer: %d\n", nr > 70 && nr < 85);
}
