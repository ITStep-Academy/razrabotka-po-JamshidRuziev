/*11.Вычислить значение логического выражения при 
всех возможных значениях логических величин X и Y:
a.	не (X и не Y) или X;
b.	Y и не X или не Y
c.	не Y и не X или Y
*/

#include <stdio.h>

int main()
{
	int a,b,c, x, y;

	printf("a = %d\n", a = !(x && !y) || x); 
	printf("b = %d\n", b = y && ! x || ! y); 
	printf("c = %d\n", c = ! y && ! x || y); 


return 0;

}
