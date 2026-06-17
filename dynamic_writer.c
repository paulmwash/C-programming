/*This program takes three command line arguement 
/*The first arguement :the program,second arguement :fiename
/*The third arguement:string to append to the file
/*Example ./dynamic_writer store.txt "My first line"
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void writer(int argc ,char *argv[]){
FILE *fptr;
  
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
