#include <stdio.h>
void main(int argc, char *argv[]) {
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float sum = 0;
    int min = ages[0];
    int size = sizeof(ages) / sizeof(ages[0]); 

    for (int i = 0; i < size; i++) {
        sum += ages[i];
        if (ages[i] < min) {
            min = ages[i];
        }
    }

    printf("Average - %.2f\n", sum / size); 
    printf("Minimum age - %d\n", min);
}
