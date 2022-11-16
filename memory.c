#include <stdlib.h>
#include <stdio.h>

int main() {

    int age = 17;
    double grade = 9.5;
    char a_grade = 'A';

    printf("Age Memory Location: %p \n", &age);
    printf("Grade Memory Location: %p \n", &grade);
    printf("Alphabetical Grade Memory Location: %p", &a_grade);

    return 0;
}