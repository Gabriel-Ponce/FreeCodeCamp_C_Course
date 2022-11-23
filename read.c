#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char line[255];
    FILE * fpointer = fopen("something.txt", "r");
    
    for(int i =1; i <= 8; i++) {

        fgets(line, 255, fpointer);
        printf("%s", line);
    }

    return 0;
}