#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char** argv) {

//Typedef em uma vari�vel
//newint atua como sin�nimo de 'int'
typedef int newint;



//Typedef na Declara��o
struct ficha {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
};

typedef struct ficha info;

//info atua como sin�nimo de 'struct ficha' 
info a,b,c;



//Typedef na Defini��o (com nome)
typedef struct ficha {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
} info;

//info atua como sin�nimo de 'struct ficha' 
info a,b,c;



//Typedef na Defini��o (sem nome) 
typedef struct  {
	char nome[50];
	int idade;
	char sexo[2];
	float salario;
	char cidade[15];
	char estado[3];
} info;

//info atua como sin�nimo de 'struct ficha' 
info a,b,c;


	
return (EXIT_SUCCESS);
}
