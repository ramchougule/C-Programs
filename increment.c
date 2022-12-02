#include<stdio.h>

int main()
{
	int no = 10;
	int x = 0;
	int y = 0;
	x=++no;
	y=no++;
	printf("%d\n",x);
	printf("%d\n",y);

	return 0;
}