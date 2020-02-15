#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float notas[] = {21.2, 23.4, 15.6, 37.8, 19.0};
    float max = notas[0];
    int pos;
    float soma = 0;
   
    for(int i = 0; i < 5; i++) {
        soma = soma + notas[i];
        if(notas[i] > max) {
            max = notas[i];
            pos = i;
        }
    }
   
    printf("O maior valor contido no vetor é %f\n", max);
    printf("Está na posição %d\n", pos);
    printf("Soma: %f\n", soma);
   
    return (EXIT_SUCCESS);
}
