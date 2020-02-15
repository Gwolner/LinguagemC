#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    char string[] = "Automacao";
    string[9] = '!';
    printf("%s", string) ;
    return (EXIT_SUCCESS);
}
