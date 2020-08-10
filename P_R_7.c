/*7.Даны координаты двух разных полей шахматной доски х1, у1, x2, у2 (целые числа, лежащие в диапазоне 1-8). 
Проверить истинность высказывания: «Ладья за один ход может перейти с одного поля на другое»*/

#include <stdio.h>

int main()
{
	int x1,y1,x2,y2;
	printf("Vvedite kordinati poley waxmatnoy doski (1-8):\n");
	printf("x1 = ");
	scanf("%d",&x1);
	printf("y1 = ");
	scanf("%d",&y1);
	printf("x2 = ");
	scanf("%d",&x2);
	printf("y2 = ");
	scanf("%d",&y2);

	printf("%d\n",(x1==x2)||(y1==y2) );

return 0;

}
