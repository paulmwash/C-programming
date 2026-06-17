#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void creater(int argc,char *argv[]){
FILE *fptr;
if (argc != 2)
  printf("Command line arguement should be two");

else
{
fptr=fopen(argv[1],"w");
  printf("File created successful %s ",argv[1]);
fclose(fptr);
}
}
