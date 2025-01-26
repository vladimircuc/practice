#include <stdio.h>
struct House{
    char address[100];
    int squareFeet;
    int bedroomNr;
    int bathroomNr;
    int price;
};
int main(int argc, char *argv[]) {
    struct House houses[3];
    struct House house1 = {"First Street", 3000, 3, 4, 100000};
    struct House house2 = {"Second Street", 1000, 1, 2, 50000};
    struct House house3 = {"Third Street", 4000, 5, 5, 400000};
    houses[0] = house1;
    houses[1] = house2;
    houses[2] = house3;
    for(int i = 0; i < 3; i++)
    {
        printf("House %d is on %s. It is %d square feet with %d bedrooms and %d bathrooms. It costs %d dollars\n", i+1, houses[i].address, houses[i].squareFeet, houses[i].bedroomNr, houses[i].bathroomNr, houses[i].price);
    }

    return 0;
}
