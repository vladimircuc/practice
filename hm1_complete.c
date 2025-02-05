#include <stdio.h>

// 1.1: Print "Hello World"
void printHelloWorld() {
    printf("Hello World\n");
}

// 1.2: Calculate Area of a Rectangle
void calculateRectangleArea() {
    float length, width;
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of rectangle: %.2f\n", length * width);
}

// 1.3: Calculate total cost of 50 items, each $9.99
void calculateTotalCost() {
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    printf("Number of items: %d\n", items);
    printf("Cost per item: $%.2f\n", cost_per_item);
    printf("Total cost: $%.2f\n", total_cost);
}

// 1.4: Calculate percentage of user's score
void calculatePercentage() {
    float user_score, max_score;
    printf("Enter user's score and maximum score: ");
    scanf("%f %f", &user_score, &max_score);
    printf("Percentage: %.2f%%\n", (user_score / max_score) * 100);
}

// 1.5: Check if temperature is between 70F and 85F
void checkTemperature() {
    float temp;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &temp);
    printf("%d\n", (temp > 70 && temp < 85) ? 1 : 0);
}

// 1.6: Determine if number is negative, positive, or zero
void checkNumberSign() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0)
        printf("Positive\n");
    else if (num < 0)
        printf("Negative\n");
    else
        printf("Zero\n");
}

// 1.7: Determine if number is odd or even
void checkOddEven() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%s\n", (num % 2 == 0) ? "Even" : "Odd");
}

int main() {
    printHelloWorld();
    calculateRectangleArea();
    calculateTotalCost();
    calculatePercentage();
    checkTemperature();
    checkNumberSign();
    checkOddEven();
    return 0;
}
