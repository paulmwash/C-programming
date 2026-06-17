#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc char *argv[]){
FILE *fptr;
  store[20];
if (argc !=2)
  printf("Commandline arguements should be two");
else
{
fptr=fopen(argv[1],"r");
  if (fptr != NULL)
    printf("File could not be opened");
  else{
    while(fgets(store,20,fptr) != NULL){
      printf("%s",store);
    }
    fclose(fptr);
  }
}
 return 0;
}
