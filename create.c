#include <stdio.h>
#include <stdlib.h>

void create_File(){
FILE *fptr;

fptr=fopen("new.txt","w");
if (fptr==NULL)
perror("File could not be created ");
return 1;
}
