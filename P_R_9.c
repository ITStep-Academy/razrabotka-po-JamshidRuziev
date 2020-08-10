/*9.Вычислить значение логического выражения:
a.	(x >= 0) или (y2!=4) при x = 1, y = 2;
b.	(x >= 0) и (y2!=4) при x =1, y =2;
c.	(x · у!= 0) и (у > x) при x =2, y =1;
d.	(x · у!= 0) или (у < x) при x= 2, y =1;
*/

#include <stdio.h>

int main()
{
	int a,b,c,d, x, y;

	printf("a = %d\n", a = (x >= 0) || (y*2 != 4));
	printf("b = %d\n", b = (x >= 0) && (y*2 != 4));

	x = 2, y = 1;

	printf("c = %d\n", c = (x*y != 0) && (y > x));
	printf("d = %d\n", c = (x*y != 0) || (y < x));



return 0;

}
