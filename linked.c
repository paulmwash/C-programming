#include <stdio.h>

typedef struct place{
const char *name;
const char *location;
const char *open;
const char *closes;
struct place *next;
}place;

void display(place *s ){
place  *i=s;
for(;i != NULL;i= i->next){
printf("%s University  opens:%s and closes:%s\n",i->name,i->open,i->closes);  
}
}



int main(){
place a={"KyU","Kutus","7am","7pm",NULL};
place b={"Egerton","Nakuru","7am","7pm",NULL};
place c={"Tharaka","Tharaka","7am","7pm",NULL};
place d={"Maseno","Siaya","7am","7pm",NULL};

a.next=&b;
b.next=&c;
c.next=&d;

display(&a);

return 0;
}
