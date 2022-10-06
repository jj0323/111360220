#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("叫块俱计\n");
	int num1;
	scanf_s("%d", &num1);
	if (num1 % 2 == 0)
	{
		printf("%d案计\n", num1);
	}
	if (num1 % 2 == 1)
	{
		printf("%d计\n", num1);
	}
	system("pause");
	return 0;
}