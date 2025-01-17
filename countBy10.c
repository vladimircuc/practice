#include <stdio.h>
void main (int argc, char *argv[])
{
    for(int i = 0; i < 101; i+=10)
    {
        printf("%d\n", i);
    }

    printf("Multiplication\n");
    for(int i = 1; i< 11; i++)
        {
            for(int j = 1; j < 10; j++)
            {
                printf("%.2d * %.2d = %.2d |", i, j, i*j);
            }
            printf("\n");
        }

    //scanf("%d", &nr);

    //printf("answer: %d\n", nr > 70 && nr < 85);
}
