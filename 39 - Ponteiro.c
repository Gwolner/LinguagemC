#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  
int integerVariable;
int* integerPointer;
   
integerVariable = 2;
printf("Valor: %d\n", integerVariable);
   
integerPointer = &integerVariable;
*integerPointer = 3;
  
printf("Valor: %d\n", integerVariable);
printf("Valor: %d\n", *integerPointer);  /*  */
   

    return (EXIT_SUCCESS);
}
