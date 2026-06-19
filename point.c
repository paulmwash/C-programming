#include <stdio.h>


void call(char *person){
printf("My name is %s\n",person);
}


void  sum(int x,int y){
printf("x+y is %d\n", x+y);
}

void product(int x,int y){
printf("x*y is %d\n",x*y);
}

void home(){

void (*back)(char *name);
back=&call;
back("Paul");

void (*rsum)(int ,int);
rsum=&sum;
rsum(4,5);

void (*rproduct)(int,int);
rproduct=&product;
rproduct(4,5);
}
