#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
  

int vetor[] = {3, 5, 6, 8, 1};   
    
printf("Valor: %d\n", vetor[2]);
int* p = vetor;
*(p+2) = 333;
printf("Valor: %d\n", p[2]);      
       

    return (EXIT_SUCCESS);
}
