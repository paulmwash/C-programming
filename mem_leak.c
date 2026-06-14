#include <stdio.h>
#include <stdlib.h>

void create_leak(){
  int *p= (int*)malloc(sizeof(int));
if (p != NULL){
  *p=5;
  free(p);
  ptr=NULL;
}
  
}

int main(){
  create_leak();
return 0;
}
