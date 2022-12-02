#include<stdio.h>

struct Demo
{
int no;
struct Demo *next;
};

int main()
{
struct Demo obj1;
struct Demo obj2;
struct Demo obj3;

obj1.no=11;
obj2.no=21;
obj3.no=51;

//obj1.no;		11
//obj1.next		200
//obj1.next->no;	21
//obj1.next->next->no	51

printf("Value of 3 from 1 : %d\n",obj1.next->no);

return 0;
}

//sir hee ekda sanga na - printf madhe takun value display kartana obj1.next->next->no  (0 display hotay) tar hee kasa display karaych jithe value 51 ahe 

