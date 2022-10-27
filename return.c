#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double getcube(double in_num);



int main()
{
    double tocube;

    printf("Insert the number you want to cube: ");
    scanf("%lf", &tocube);

    printf("The result is %.3lf", getcube(tocube));



    return 0;
}

double getcube(double in_num) {

    double result = pow(in_num, 3.0);
    return result;
}