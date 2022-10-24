#include <stdio.h>
#include <stdlib.h>


int main()
{
    
    int luckyNumbers[] = {5, 7, 15, 2};

    printf("%d\n", luckyNumbers[1]);

    int otherarray[5];
    otherarray[0] = 67;
    otherarray[4] = 5;

    printf("1: %d 2: %d", otherarray[0], otherarray[4]);

    return 0;
}