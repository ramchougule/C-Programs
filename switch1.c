#include<stdio.h>

int main()
{	
	int iToken=0;
	
	printf("Enter your token number : 11, 21, 51, 101\n");
	scanf("%d",&iToken);
	
	switch(iToken)
	{
		case 11:
			printf("Mulachi chappal milali\n");
			break;
		case 21:
			printf("Mulichi chappal milali\n");
			break;
		case 51:
			printf("Aie che chappal milali\n");
			break;
		case 101:
			printf("wadlanchi chappal milali\n");
			break;
		default:
			printf("Sorry asa token nahiye..\n");
			break;
	}
	return 0;



}