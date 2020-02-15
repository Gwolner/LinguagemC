#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

int main(int argc, char** argv) {


int number = 0 ;
int *p = NULL ;

/* Ponteiro que pode apontar para um inteiro */
number = 10 ;
printf ( "Endereco do numero: %p" , &number ) ;
printf ( "\nValor do numero: %d\n\n" , number ) ;
p = &number ;
/* Armazena o endereco do nuumero no ponteiro */

printf ( "\nEndereco do ponteiro: %p" , &p ) ;
printf ( "\nTamanho do ponteiro: %ld bytes" , sizeof ( p ) ) ;
printf ( "\nValor do ponteiro: %p" , p ) ;
printf ( "\nValor apontado: %d\n" , *p ) ;

return (EXIT_SUCCESS);
}
