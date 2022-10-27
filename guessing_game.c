#include <stdio.h>
#include <stdlib.h>


int main()
{
    int guessing;
    int guess = 7;
    

    while (1){
    printf("Welcome to the most interesting guessing game ever! \nPlease insert a number between 1 and 10 and try to guess the number: ");
      scanf("%d", &guessing);
      if (guessing >= 1 && guessing <= 10) {
          if (guessing == guess) {
            printf("Your answer was correct!\n");
            break;
          }
          else
          {
              printf("Your answer was incorrect, Try Again!\n");
          }
          
      }
      else
      {
        printf("That's not a valid number\n");    
      }
      
      
    }

   
    

    return 0;
}