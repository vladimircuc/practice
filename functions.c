#include <stdio.h>
float PI = 3.14;
void farToCel(float f){
    float c = (f - 32) * 5 / 9;
    printf("%.2f degrees F is %.2f degrees C\n", f, c);
}

void area(int width, int height){
    printf("Are of an object with hegiht %d and width %d is %d\n", height, width, height * width);
}

void areRadius(int radius)
{
    float area = (double) radius * radius * PI; 
    printf("The area of a circle with radius of %d is %.2f\n", radius, area);
}

int main(){
    farToCel(60);
    area(30, 40);
    areRadius(17);
    return 0;
}