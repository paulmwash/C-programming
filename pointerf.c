#include <stdio.h>

void person(char *name){
printf("My name is %s\n",name);
}

void profit(int x,int y){
printf("we made gross profit of %d\n",x*y);
}

void fin(char *mes){
printf("We thank you all %s\n",mes);
}


void center(){
void (*rperson)(char *p);
rperson=&person;
rperson("Paul");

void (*rprofit)(int x,int y);
rprofit=&profit;
rprofit(12,40000);

void (*rfin)(char *f);
rfin=&fin;
rfin("Employees");
}
