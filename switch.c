#include <stdio.h>
#include <stdlib.h>

int main() {

    char grade;
    
    printf("Insert a grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
    case 'A':
        printf("You did great!");
        break;
    case 'B':
        printf("You did good enough!");
        break;
    case 'C':
        printf("You did... \nenough?");
        break;
    case 'D':
        printf("You though you did something, didn't you?");
        break;
    case 'E':
        printf("You barely passed");
        break;
    case 'F':
        printf("You failed!");
        break;
    
    default:
        printf("That's not a valid grade");
        break;
    }

    return 0;
}