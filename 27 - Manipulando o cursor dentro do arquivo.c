#include <stdio.h>

//Altera o conte�do de file.txt. 
//� recomend�vel verificar o conteudo antes e depois de executar o programa!
int main () {
   FILE *fp;

   fp = fopen("file.txt","w+");
   fputs("This is tutorialspoint.com", fp);
 
   fseek( fp, 7, SEEK_SET );
   fputs(" C Programming Language", fp);
   fclose(fp);
  
   return(0);
}
