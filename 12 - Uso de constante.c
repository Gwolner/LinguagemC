#include <stdio.h>
#define MAX 100
int main(int argc,char** argv)
{

int x=10 + MAX;
int y = x/MAX;

printf("O valor de x � %d e o de y � %d \n",x,y);
printf("%d",x==y);

return 0;

}
