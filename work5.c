/*4.Напишите программу,которая меняет местами
 значения двух переменных в памяти.*/

#include <stdio.h>

int main()
{
	int a = 5,b = 2;
	a = a+b;
	b = a-b;
	a = a-b; 
	
	printf("%d, %d, %d",a,b);

	return 0;
	
}