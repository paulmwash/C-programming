#include <stdio.h> 

int x=20;
int y=13;

void bitwiseAND(){
int k;
  k=x & y;
  printf("k is %b\n",k);
  }

void bitwiseOR(){
  int j;
  j=x | y;
  printf("j is %b\n",j);
}

void bitwiseXOR(){
int p;
  p=x ^ y;
  printf("p is %b\n",p); 
}

void bitwiseNOT(){
  int k= ~x;
  int z=~y;
  printf("k is %b and z is %b ",k,z);
}




