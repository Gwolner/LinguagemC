#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

int main(int argc, char** argv) {

int *p , i [10] ;
p = i ;

// Atribui��o usando o �ndice
p[5] = 100;

printf("O valor de p[5] � %d",p[5]);


// Atribui��o usando aritm�tica de ponteiro
*(p+5) = 100;

printf("\nO valor de *(p+5) � %d",*(p+5));


return (EXIT_SUCCESS);
}
