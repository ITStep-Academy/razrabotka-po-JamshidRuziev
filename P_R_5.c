/*5.Записать логическое выражение, определяющее какая дробь больше А/B или C/D. */
#include <stdio.h>
#include <stdbool.h>

int main ()
{
	int a,b,c,d;
	scanf("%d",&a);
	scanf("%d",&b);
	


	
	printf("a/b > cd %d\n",(a/b > c/d ));
	printf("a/b < cd %d\n",(a/b < c/d ));
	return 0;
}