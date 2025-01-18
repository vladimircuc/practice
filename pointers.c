#include <stdio.h>
void main(int argc, char *argv[]) {
    
    int a = 2;
    char b = 'a';
    double c = 1.2;

    int* aP = &a;
    char* bP = &b;
    double* cP = &c;

    printf("value - %d, address - %p, size %.2ld\n", a, aP, sizeof(a));
    printf("value - %.2f, address - %p, size %.2ld\n", c, cP, sizeof(c));
    printf("value - %c, address - %p, size %.2ld\n", b, bP, sizeof(b));

    int first;
    int second;

    printf("print first nr: ");
    scanf("%d", &first);
    printf("print second nr: ");
    scanf("%d", &second);

    int* firstP = &first;
    int* secondP = &second;

    int sum = *firstP + *secondP;

    printf("the sum is: %d\n", sum);


}
