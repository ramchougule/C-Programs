#include<stdio.h>

int main()
{
	int no = 11;
	
	int *p = &no;

	printf("%d\n",sizeof(no));
	printf("%d\n",sizeof(p));

	return 0;
}