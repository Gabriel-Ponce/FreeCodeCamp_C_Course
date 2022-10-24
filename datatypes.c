#include <stdio.h>
#include <stdlib.h>


int main() {


    //number types

    int age = 17;
    double rnum = 2341.123123123413413424134141;
    float annum = 0.12312312344;

    //text types

    char grade = 'A';
    char student[] = "Gabriel";

    printf("%s \n", student);
    
    printf("%d \n", age);
    printf("%.10f \n", rnum);
    printf("%.10f \n", annum);


    return 0;
}