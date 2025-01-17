#include <stdio.h>
void main (int argc, char *argv[])
{
    int nr = 10;

    while(nr > 0)
    {
        printf("%d\n", nr);
        nr--;
    }

    while(nr < 11)
    {
        if(nr % 2 == 0)
        {
            printf("Even - %d\n", nr);
        }
        nr++;
    }

    //scanf("%d", &nr);

    //printf("answer: %d\n", nr > 70 && nr < 85);
}
