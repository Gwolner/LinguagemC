#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10


void B(int *i){

//A variável i passa a ter valor 0.
*i= 0; 
printf("\nO valor de i é %d",*i);	

//Fim do procedimento. Retoma a função principal.	
}



int main(int argc, char** argv) {
	
int i = 1;

// A variável local i tem valor 1.
printf("O valor de i é %d",i);

// É chamado o procedimento.
B(&i);
//A função principal é retomada.

// A variável local i agora está com valor 0.
printf("\nO valor de i é %d",i);


return (EXIT_SUCCESS);
}
