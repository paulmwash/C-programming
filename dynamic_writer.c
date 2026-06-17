#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writer(int argc ,char *argv[]){
FILE *fptr;
  
printf("Enter file name followed by string you want to write in\n");
if (argc != 3)
  printf("command line arguements should be two");
else
{
fptr=fopen(argv[1],"a");
if ( fptr == NULL)
  printf("File could not be opened");
else
{
fputs(argv[2],fptr);
fputs("\n",fptr);
fclose(fptr);
}
}
}
