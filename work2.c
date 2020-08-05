/*2.	Разработайте программу, которая при заданном целом числе 
извлекает и печатает первую (самую правую) цифру этого числа.*/

#include <stdio.h>

int main()
{
	int a;

	printf("Enter an integer:\n");
	scanf("%d",&a);
	a = a%10;
	printf("%d",a);

	return 0;
	
}