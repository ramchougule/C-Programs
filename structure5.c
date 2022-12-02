#include<stdio.h>

#pragma pack(1)
struct Demo
{
int i;
char ch;
float f;
float d;
};

int main()
{
struct Demo dobj;

printf("Size of the structure is %d\n",sizeof(dobj));

return 0;
}

7588945488 - Piyush