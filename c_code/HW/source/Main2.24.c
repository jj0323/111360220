#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("�п�J�@�Ӿ�ơG\n");
	int num1;
	scanf_s("%d", &num1);
	if (num1 % 2 == 0)
	{
		printf("%d������\n", num1);
	}
	if (num1 % 2 == 1)
	{
		printf("%d���_��\n", num1);
	}
	system("pause");
	return 0;
}