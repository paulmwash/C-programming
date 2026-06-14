#include <stdio.h>
#include <stdlib.h>

void create_leak(){
  int *p= (int*)malloc(sizeof(int));
if (p == NULL){
 printf("Memory allocation failed");
  return 0;
}
 *p=5;
  free(p);
  p=NULL;
}
