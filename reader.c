#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reading(int argc ,char *argv[]){
FILE *fptr;
  char store[20];
if (argc !=2)
  printf("Commandline arguements should be two");
else
{
fptr=fopen(argv[1],"r");
  if (fptr != NULL)
    printf("File could not be opened");
  else{
    while(fgets(store,sizef(store),fptr) != NULL){
      printf("%s",store);
    }
    fclose(fptr);
  }
}
}
