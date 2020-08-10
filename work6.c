/*Как с помощью операции / и % выделить вторую с конца цифру числа?*/
#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d",&a);
	printf("%d\n",a%100/10);
	return 0;
}