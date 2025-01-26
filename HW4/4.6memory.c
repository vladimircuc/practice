#include <stdio.h>
#include <stdlib.h>
FILE *fptr;
int compare(const void *a, const void *b) {

    const int *num1 = (const int *)a;
    const int *num2 = (const int *)b;


    return *num2 - *num1;  // Descending order
}
void main (int argc, char *argv[])
{
    int *students;
    int numStudents;
    printf("Print a number of students: ");
    scanf("%d", &numStudents);
    students = calloc(numStudents, sizeof(*students));

    for(int i = 0; i< numStudents; i++)
    {
        printf("Print a grade for student %d: ", i+1);
        scanf("%d", &students[i]);
    }
    qsort(students, numStudents, sizeof(int), compare);
    fptr = fopen("scores.txt", "w");
    for(int i = 0; i< numStudents; i++)
    {
        fprintf(fptr, "%d\n", students[i]);
    }

    fclose(fptr);
    
}
