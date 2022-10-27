#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num1;
    int num2;
    int op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Input Operation:\n0: Sum\n1: Substraction\n2: Multiplication:\n3: Division\n");
    scanf("%d", &op);

    if (op == 0) {
    printf("Result: %d", num1+num2);
    }

    else if (op == 1) {
    printf("Result: %d", num1-num2);
    }

    
    else if (op == 2) {
    printf("Result: %d", num1*num2);
    }

    else if (op == 3) {
    printf("Result: %d", num1/num2);
    }

    else {
    printf("ERROR: That was not a valid operation");
    }    


    

    return 0;
}