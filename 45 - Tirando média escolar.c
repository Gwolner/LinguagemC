#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TAM 20

int main(int argc, char** argv) {
    const int N = 4, M = 3;
    float notas[N][M], media_aluno[N], media_disc[M];
    float soma, media;
    int i,j;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++) {
            printf("Nota do Aluno %d na Matéria %d:", i, j);
            scanf("%f", &notas[i][j]);
        }
    }

    for ( i = 0; i < N; i++) {
        soma = 0;
        for (j = 0; j < M; j++)
            soma += notas[i][j];
        media = soma / M;
        media_aluno[i] = media;
    }
    
    for (j = 0; j < M; j++) {
        soma = 0;
        for (i = 0; i < N; i++)
            soma += notas[i][j];
        media = soma / N;
        media_disc[j] = media;
    }
    
    printf("Média das notas dos alunos:\n");
    
    for (i = 0; i < N; i++)
        printf("Aluno[%d]=%.2f\n", i, media_aluno[i]);
        
    printf("Média das notas em cada disciplina:\n");
    for (j = 0; j < M; j++)
        printf("Materia[%d]=%.2f\n", j, media_disc[j]);
    return (EXIT_SUCCESS);
}
