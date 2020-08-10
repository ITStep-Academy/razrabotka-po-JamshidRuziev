/*10.Вычислить значение логического выражения при 
всех возможных значениях логических величин X и Y:
a.	не (X или Y);
b.	не X и Y
c.	X и не Y

*/

#include <stdio.h>

int main()
{
	int a,b,c, x, y;

	printf("a = %d\n", a = !(x || y));  
	printf("b = %d\n", b = !(x && y));  
	printf("c = %d\n", c = x && !y);    

	


return 0;

}
