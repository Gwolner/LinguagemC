#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {

//Defini��o seguida da Declara��o
struct ficha {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
};

struct ficha info1, info2, info3;

//Defini��o (com nome) e com Declara��o
struct ficha {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
} info1, info2, info3;


//Defini��o (sem nome) e com Declara��o
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
