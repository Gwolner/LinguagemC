#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 3

int main(int argc, char** argv) {

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
info simple[T];
int i;

for (i=0; i<T; i++){
	printf("\n===== DADOS ======\n");
	printf("Insira seu nome: ");
	fgets(simple[i].nome,50,stdin);
	printf("Insira sua idade: ");
	scanf("%d",&simple[i].idade);
	fflush(stdin);
	printf("Insira seu sexo: ");
	fgets(simple[i].sexo,2,stdin);
	fflush(stdin);
}

for (i=0;i<T; i++){
	printf("\n\n== RESULTADOS ===\n");
	printf("O seu nome � : %s",simple[i].nome);
	printf("A sua idade � : %d\n",simple[i].idade);
	printf("Seu sexo �: %s",simple[i].sexo);
}

return (EXIT_SUCCESS);
}
