/*6.Даны координаты поля шахматной доски х, у (целые числа, лежащие в диапазоне 1-8) 
Учитывая, что левое нижнее поле доски (1,1) является черным, 
проверить истинность высказывания: “Данное поле является белым”.*/

#include <stdio.h>

int main()
{
	int x,y;
	printf("Vvedite kordinati polya shaxmatnoy doski(1-8): ");
	printf("x = ");
	scanf("%d",&x);
	printf("y = ");
	scanf("%d",&y);


		
		printf("%d\n", (x+y)%2 == 0);

return 0;

}
