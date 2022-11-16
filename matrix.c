#include <stdlib.h>
#include <stdio.h>


int main() {

    int nums [2][2] = {{1, 2}, {3,4}};

    for(int i = 0; i < 2; i++) {
        printf("The column we are right now is %d \n", i+1);
        for(int j = 0; j < 2; j++) {
            printf("One of the numbers in the matrix is %d \n", nums[i][j]);
        }
 

    }

    return 0;
}