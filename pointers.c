#include <stdlib.h>
#include <stdio.h>

int main() {

    int age = 17;
    int * pAge = &age;
    double grade = 9.5; 
    double * pGrade = &grade;
    char a_grade = 'A';
    char * pa_grade = &a_grade; 


    printf("Age Memory Location: %p \n", pAge);
    printf("Grade Memory Location: %p \n", pGrade);
    printf("Alphabetical Grade Memory Location: %p \n", pa_grade);
    printf("Age Pointer Value: %d \n", *pAge);
    printf("Grade Pointer value: %.1f \n", *pGrade);
    printf("Alphabetical Grade Pointer Value: %c", *pa_grade);

    

    return 0;
}