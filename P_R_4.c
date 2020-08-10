/*5.Записать логическое выражение, определяющее какая дробь больше А/B или C/D. */
#include <stdio.h>
#include <stdbool.h>

int main ()
{
	float a,b,c,d;
	scanf("%lf%lf",&a,&b);
	scanf("%lf%lf",&c,&d);
	


	
	printf("a/b > cd %d\n",(a/b > c/d ));
	printf("a/b < cd %d\n",(a/b < c/d ));
	return 0;
}