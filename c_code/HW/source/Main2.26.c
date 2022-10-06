#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("請輸入兩個整數：\n");
	int num1,num2;
	scanf_s("%d%d", &num1, &num2);
	if (num1%num2 == 0)
	{
		printf("%d為%d的倍數\n", num1, num2);
	}
	else
	{
		printf("%d不是%d的倍數\n", num1, num2);
	}
	system("pause");
	return 0;
}