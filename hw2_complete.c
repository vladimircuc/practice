#include <stdio.h>

// 2.1: Countdown from 10 to 1 using while loop
void countdown() {
    int i = 10;
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
    printf("Happy New Year!\n");
}

// 2.2: Print even numbers between 0 and 10 using while loop
void printEvenNumbers() {
    int i = 0;
    printf("Even numbers between 0 and 10:\n");
    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i++;
    }
}

// 2.3: Count to 100 by tens using for loop
void countByTens() {
    printf("Counting to 100 by tens:\n");
    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }
}

// 2.4: Multiplication table using nested loop
void multiplicationTable() {
    printf("Multiplication Table (1-10):\n");
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%2d ", i * j);
        }
        printf("\n");
    }
}

// 2.5: Calculate the average of different ages
void calculateAverageAge() {
    int count, sum = 0, age;
    printf("Enter the number of ages: ");
    scanf("%d", &count);
    
    for (int i = 0; i < count; i++) {
        printf("Enter age %d: ", i + 1);
        scanf("%d", &age);
        sum += age;
    }
    printf("Average age: %.2f\n", (float)sum / count);
}

// 2.6: Find the lowest age among the ages
void findLowestAge() {
    int count, age, lowest;
    printf("Enter the number of ages: ");
    scanf("%d", &count);
    
    if (count <= 0) {
        printf("Invalid input.\n");
        return;
    }
    
    printf("Enter age 1: ");
    scanf("%d", &lowest);
    
    for (int i = 1; i < count; i++) {
        printf("Enter age %d: ", i + 1);
        scanf("%d", &age);
        if (age < lowest) {
            lowest = age;
        }
    }
    printf("Lowest age: %d\n", lowest);
}

// 2.7: Working with pointers and variables
void pointerDemo() {
    double d = 3.14;
    int i = 42;
    char c = 'A';
    
    double *pd = &d;
    int *pi = &i;
    char *pc = &c;
    
    printf("Variable Information:\n");
    printf("Double: Value = %.2f, Address = %p, Size = %lu bytes\n", d, (void*)&d, sizeof(d));
    printf("Pointer to Double: Address = %p, Value = %p, Size = %lu bytes\n", (void*)&pd, (void*)pd, sizeof(pd));
    printf("Integer: Value = %d, Address = %p, Size = %lu bytes\n", i, (void*)&i, sizeof(i));
    printf("Pointer to Integer: Address = %p, Value = %p, Size = %lu bytes\n", (void*)&pi, (void*)pi, sizeof(pi));
    printf("Character: Value = %c, Address = %p, Size = %lu bytes\n", c, (void*)&c, sizeof(c));
    printf("Pointer to Character: Address = %p, Value = %p, Size = %lu bytes\n", (void*)&pc, (void*)pc, sizeof(pc));
}

// 2.8: Read two numbers and add them using pointers
void addUsingPointers() {
    int num1, num2, sum;
    int *p1 = &num1, *p2 = &num2;
    
    printf("Enter first number: ");
    scanf("%d", p1);
    printf("Enter second number: ");
    scanf("%d", p2);
    
    sum = *p1 + *p2;
    printf("Sum: %d\n", sum);
}

int main() {
    countdown();
    printEvenNumbers();
    countByTens();
    multiplicationTable();
    calculateAverageAge();
    findLowestAge();
    pointerDemo();
    addUsingPointers();
    return 0;
}
