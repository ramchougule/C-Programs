#include<stdio.h>

struct Demo
{
char ch;
int i;
float f;
double d;
};

union Hello
{
int i;
float f;
double d;
};



int main()
{
struct Demo dobj;
union Hello hobj;

dobj.i=11;
dobj.f=10.9;
dobj.d=90.1;

hobj.f=92.44;

printf("Size of the structure is %d\n",sizeof(dobj));
printf("Size of the union is %d\n",sizeof(hobj));

hobj.i = 34;

printf("%f\n",hobj.f);
printf("%d\n",hobj.i);
printf("%f\n",hobj.d);

return 0;
}