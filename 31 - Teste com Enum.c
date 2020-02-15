#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

int main(int argc, char** argv) {

enum semana {sabado,domingo,segunda,terca,quarta,quinta,sexta} hoje;

//Insira um nome para 'hoje'
hoje = sabado;


printf("Hoje é dia %d",hoje); //Sempre é exibido em decimal.


return (EXIT_SUCCESS);
}
