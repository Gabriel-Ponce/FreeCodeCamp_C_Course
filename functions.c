#include <stdio.h>
#include <stdlib.h>



void createSalute() {

    printf("Whassup! ");

}

void namecreateSalute(char name[]) {

    printf("Whassup! %s", name);

}

int main()
{
    char name[20];
    createSalute();
    printf("\nInput your name: ");
    fgets(name, 20, stdin);
    namecreateSalute(name);

    return 0;
}