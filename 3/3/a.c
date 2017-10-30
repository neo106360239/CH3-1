#include <stdio.h>
#include <stdlib.h>

int maximum(int x, int y, int z);

int main(void)
{
	int number1;
	int number2;
	int number3;
	printf("enter three integers:");
	scanf_s("%d %d %d", &number1, &number2, &number3);
	printf("maximum is: %d\n", max(number1, number2, number3));
	system("pause");
	return 0;
}
