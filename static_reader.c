#include <stdio.h>
#include <stdlib.h>

void read(){
FILE *fptr;
char buffer[50];

  fptr=fopen("new.txt","r");

  if (fptr==NULL)
    printf("File could not be opened");
  else
  {
    printf("file opened");

    while(fgets(buffer,50,fptr) !=NULL){
      printf("%s",buffer);
    }
  }
 fclose(fptr); 
}
