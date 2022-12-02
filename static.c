#include<stdio.h>

void Demo()
{
auto int A=10;
A++;
printf("the value of A from demo : %d\n",A);
}

void hello()
{
static int B=10;
B++;
printf("the value of B from hello : %d\n",B);
}

int main()
{
Demo();
Demo();
Demo();

hello();
hello();
hello();

return 0;
}