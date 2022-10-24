#include <stdio.h>
#include <stdlib.h>


int main() {
    int age;
    double grade;
    char name[20];

    printf("Enter your name: ");
    fgets(name, 20, stdin);
    printf("Your name is:\n%s\n", name);

    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Your age is:\n%d years old\n", age);

    printf("Enter your grade: ");
    scanf("%lf", &grade);
    printf("Your grade is:\n%.2f", grade);

    return 0;
}