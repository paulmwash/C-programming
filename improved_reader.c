#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void reader(int argc,char *argv[]){
  FILE *fptr;
  char buf[40];
  int ch;

if (argc == 1)
  printf("-m for manual -h for help -f for file");
  else
{
while((ch=getopt(argc,argv,"mhf:")) != -1){
  switch(ch){
    case 'm':
    case 'h':
      printf("-h help -m manual");
      break;
    case 'f': 
fptr=fopen(optarg,"r");
  if (fptr== NULL)
    printf("File could not be opened");
  else{
   while(fgets(buf,sizeof(buf),fptr) != NULL){
     printf("%s",fptr);
   }
    fclose(fptr)
  }
    break
}    
} 
return 0;  
}






