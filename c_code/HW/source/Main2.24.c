#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("請輸入一個整數：\n");
	int num1;
	scanf_s("%d", &num1);
	if (num1 % 2 == 0)
	{
		printf("%d為偶數\n", num1);
	}
	if (num1 % 2 == 1)
	{
		printf("%d為奇數\n", num1);
	}
	system("pause");
	return 0;
}