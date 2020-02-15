#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  


int number = 0;
int* p = NULL;
  
number = 10;
printf("Endereço do número: %p\n", &number);
printf("Valor do número...: %d\n\n", number);
   
p = &number;
printf("Endereço do ponteiro: %p\n", &p);
printf("Valor do ponteiro...: %p\n", p);
printf("Valor apontado......: %d\n", *p);
printf("Tamanho do ponteiro.: %ld bytes\n", sizeof(p));  
       

    return (EXIT_SUCCESS);
}
