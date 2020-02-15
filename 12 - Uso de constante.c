#include <stdio.h>
#define MAX 100
int main(int argc,char** argv)
{

int x=10 + MAX;
int y = x/MAX;

printf("O valor de x é %d e o de y é %d \n",x,y);
printf("%d",x==y);

return 0;

}
