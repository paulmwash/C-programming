#include <stdio.h> 

int x=20;
int y=13;

void bitwiseAnd(){
int k;
  k=x & y;
  printf("%b",k);
  }

void bitwiseOR(){
  int j;
  j=x | y;
  printf("%b",j);
}

void bitwiseXOR(){
int p;
  p=x ^ y;
  printf("%b",p); 
}

void bitwiseNOT(){
  int k= ~x;
  int z=~y;
  printf("k is %b and z is %b ",k,z);
}




