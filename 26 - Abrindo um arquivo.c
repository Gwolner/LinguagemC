#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
    FILE *file = fopen("teste.txt", "r");
    if(file == NULL) {
        printf("Erro na abertura do arquivo!\n");
    } else {
        printf("Arquivo aberto com sucesso!\n");
    }
//    int a = fputc('A', file);
//    int a = fgetc(file);
//    int a = fputs("Hello World!", file);
    int x, y;
//    fprintf(file, "Teste do fprintf %05d\n", x);
//    fscanf(file, "%05d%05d", &x, &y);
//    remove("teste.txt");
    fprintf(stdout, "%d %d", x, y);
//    fclose(file);
    return (EXIT_SUCCESS);
}
