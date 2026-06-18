#include <stdio.h>

typedef struct{
const char *name;
const char *place;
int age;
}Person;

void description(Person *p){
printf("%s lives in %s ,he is %d years old ",p->name,p->place,p->age);
}

void receive(){
  Person s={"Paul","Kenya",21};
  description(&s);
}
