#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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
info a,b,c;

printf("====SEUS DADOS=====\n");
printf("Insira seu nome: ");
fgets(a.nome,50,stdin);
printf("Insira sua idade: ");
scanf("%d",&a.idade);
fflush(stdin);
printf("Insira seu sexo: ");
fgets(a.sexo,2,stdin);

printf("\n==== DADOS DE OUTRA PESSOA=====\n");
fflush(stdin);
printf("Insira o nome: ");
fgets(b.nome,50,stdin);
printf("Insira a idade: ");
scanf("%d",&b.idade);
fflush(stdin);
printf("Insira o sexo: ");
fgets(b.sexo,2,stdin);



printf("\n====SEUS DADOS=====\n");
printf("O seu nome � : %s",a.nome);
printf("A sua idade � : %d\n",a.idade);
printf("Seu sexo �: %s",a.sexo);

printf("\n\n==== DADOS DE OUTRA PESSOA=====\n");
printf("O seu nome � : %s",b.nome);
printf("A sua idade � : %d\n",b.idade);
printf("Seu sexo �: %s",b.sexo);


	
return (EXIT_SUCCESS);
}
