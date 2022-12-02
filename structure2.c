#include<stdio.h>

struct Student
{
	int Marks;
	int Age;
	char Division;
};

int main()
{
struct Student Amit;
struct Student Pooja;

Amit.Marks = 93;
Amit.Age = 23;
Amit.Division ='A';

Pooja.Marks = 78;
Pooja.Age = 21;
Pooja.Division ='B';

return 0;
}