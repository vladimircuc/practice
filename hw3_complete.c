#include <stdio.h>

void printSecondElement() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to the first element
    printf("Second element: %d\n", *(ptr + 1)); // Access second element
}

void printAllElements() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer to first element
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d\n", *(ptr + i)); // Access each element using pointer
    }
}

float fahrenheitToCelsius(float f) {
    return (f - 32) * 5 / 9;
}

float calculateRectangleArea(float width, float height) {
    return width * height;
}

#define PI 3.14159

float calculateCircleArea(float radius) {
    return PI * radius * radius;
}


int main() {
    printSecondElement();
    printAllElements();

    float tempF = 98.6;
    printf("Temperature in Celsius: %.2f\n", fahrenheitToCelsius(tempF));

    float width = 5.0, height = 10.0;
    printf("Rectangle area: %.2f\n", calculateRectangleArea(width, height));

    float radius = 7.0;
    printf("Circle area: %.2f\n", calculateCircleArea(radius));

    return 0;
}