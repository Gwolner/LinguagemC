#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10


void B(int *i){

//A vari�vel i passa a ter valor 0.
*i= 0; 
printf("\nO valor de i � %d",*i);	

//Fim do procedimento. Retoma a fun��o principal.	
}



int main(int argc, char** argv) {
	
int i = 1;

// A vari�vel local i tem valor 1.
printf("O valor de i � %d",i);

// � chamado o procedimento.
B(&i);
//A fun��o principal � retomada.

// A vari�vel local i agora est� com valor 0.
printf("\nO valor de i � %d",i);


return (EXIT_SUCCESS);
}
