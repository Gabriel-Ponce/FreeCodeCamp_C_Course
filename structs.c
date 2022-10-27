#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char major[50];
    int age;
    double grade;
};


int main() {

    struct Student Gabriel;
    struct Student Jose;

    Gabriel.age = 17;
    Gabriel.grade = 9.4;
    strcpy(Gabriel.name, "Gabriel");
    strcpy(Gabriel.major, "ITC");

    Jose.age = 15;
    Jose.grade = 9.5;
    strcpy(Jose.name, "Jose");
    strcpy(Jose.major, "HS");

    printf("%s\n", Gabriel.name);
    printf("%s", Jose.name);
    
    
    

    return 0;
}