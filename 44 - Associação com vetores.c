#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

int main(int argc, char** argv) {


int *p ; //Declaracão do ponteiro p 
int sample [10] ; //Declaração  do array sample com 10 elementos 

//p irá receber o endereço do primeiro elemento do array 
p = sample ; 

printf("O valor em p é %p.",p);


//Também é possível escrever desta forma, mas não é algo profissional...
p = &sample[0]; 

printf("\nO valor em p é %p.",p);


return (EXIT_SUCCESS);
}
