/*2.Записать условие, которое является истинным, 
когда хотя бы одно из чисел X, Y и Z больше 80*/
#include <stdio.h>
#include <stdbool.h>

int main ()
{
	int x,y,z;
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);


	
	printf("%d\n",x>=80 || y>=80||z>=80);
	return 0;
}