#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 10


int a,b;


void soma(void){
	
int c= 0;
	
c = a+b;

printf("O valor de c é %d",c);
	
}



int main(int argc, char** argv) {
	
a = 10;
b = 55;

soma();

return (EXIT_SUCCESS);
}
