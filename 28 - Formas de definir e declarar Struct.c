#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {

//Definição seguida da Declaração
struct ficha {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
};

struct ficha info1, info2, info3;

//Definição (com nome) e com Declaração
struct ficha {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
} info1, info2, info3;


//Definição (sem nome) e com Declaração
struct  {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
} info1, info2, info3;


return (EXIT_SUCCESS);
}
