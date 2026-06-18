#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <getopt.h>

void reader(int argc,char *argv[]){
  FILE *fptr;
  char buf[40];
  int ch;

if (argc == 2)
  {
while((ch=getopt(argc,argv,"mhf:")) != -1){
  switch(ch){
    case 'm':
    case 'h':
      printf("-h help -m manual");
      break;
    case ':' | '?':
     printf("Please enter arguements %-c",optopt);
     break;
    case 'f': 
fptr=fopen(optarg,"r");
  if (fptr== NULL)
    printf("File could not be opened");
  else{
   while(fgets(buf,sizeof(buf),fptr) != NULL){
     printf("%s",buf);
   }
    fclose(fptr);
  }
    break;
}}}
else
  printf("Cmmandine should be two");
}



