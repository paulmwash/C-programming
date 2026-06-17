#include <stdio.h>
#include <stdlib.h>

void write(){
FILE *fptr;
char buffer[]="Adding commits to github via git is the best approach";
fptr=fopen("new.txt","a");
if (fptr==NULL)
  printf("File could not be opened");
else
{
fputs(buffer,fptr);
fputs("\n",fptr);
printf("Data has been successful written to file new.txt");
fclose(fptr);
}
}
