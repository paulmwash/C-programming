#include <stdio.h>
#include <stdlib.h>
int main(){
FILE *fptr;

fptr=fopen("new.txt","w");
if (fptr==NULL)
printf("File could not be created ");
else
printf("File created successful");
}
return 0;
}
