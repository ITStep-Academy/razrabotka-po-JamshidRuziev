/*5.Записать логическое выражение, определяющее какая дробь больше А/B или C/D*/
#include <stdio.h>
#include <stdbool.h>

int main ()
{
	float a,b,c,d;
	scanf("%lf",&a,&b);
	scanf("%lf",&c,&d);
	

	printf("a/b > c/d =  %d\n",(a/b > c/d ));
	printf("a/b < c/d =  %d\n",(a/b < c/d ));
	return 0;
}