#include <stdlib.h>
#include <stdio.h>

int main() {


    FILE * fpointer = fopen("something.txt", "a");
    
    //printf("%p", &fpointer);
    char text[20];

    printf("Insert the text you want to write: ");
    fgets(text, 20, stdin);
    fprintf(fpointer, "\n%s", text);

    fclose(fpointer);
    return 0;
}