#include<stdio.h>

struct demo
{
int arr[3];
float f;
char ch;
double d;
};

int main()
{
	struct demo obj;
	printf("%d",sizeof(obj));
	/*printf("%d",sizeof(obj.f));
	printf("%d",sizeof(obj.ch));
	printf("%d",sizeof(obj.d));*/
	return 0;
}