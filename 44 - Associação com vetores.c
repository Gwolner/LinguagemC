#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

int main(int argc, char** argv) {


int *p ; //Declarac�o do ponteiro p 
int sample [10] ; //Declara��o  do array sample com 10 elementos 

//p ir� receber o endere�o do primeiro elemento do array 
p = sample ; 

printf("O valor em p � %p.",p);


//Tamb�m � poss�vel escrever desta forma, mas n�o � algo profissional...
p = &sample[0]; 

printf("\nO valor em p � %p.",p);


return (EXIT_SUCCESS);
}
