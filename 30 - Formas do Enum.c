#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10

int main(int argc, char** argv) {

//Definindo (com nome) e Declarando
enum semana {sabado,domingo,segunda,terca,quarta,quinta,sexta} hoje;



//Definindo (sem nome) e Declarando
enum {sabado,domingo,segunda,terca,quarta,quinta,sexta} hoje;



//Definindo com Struct
struct enum  {sabado,domingo,segunda,terca,quarta,quinta,sexta} diaDaSemana;

// diaDaSemana aqui � sin�nimo de "struct enum". 
//"hoje", "amanha" e "depois" s�o vari�veis declaradas
diaDaSemana hoje,amanha, depois;




return (EXIT_SUCCESS);
}
