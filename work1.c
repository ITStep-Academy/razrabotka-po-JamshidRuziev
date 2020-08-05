/*1.Задано действительное число,выведите 
целую и дробную часть этого числа.*/
#include <stdio.h>

int main()
{
	double a,c;
	int b;

	printf("Enter a valid number:\n");
	scanf("%lf",&a);
	b = (int) a; //yavniy pereobrazavaniya peremeni double na int
	c = a-b;
	printf("%.2lf, %d,  %.2lf",a,b,c);

	return 0;
	
}