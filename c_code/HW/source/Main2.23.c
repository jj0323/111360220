#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("�п�J�T�Ӿ�ơG\n");
	int num1;
	int num2;
	int num3;
	scanf_s("%d%d%d", &num1, &num2, &num3);
	if (num1 > num2 && num1 > num3) 
	{ 
		printf("�̤j��Ƭ�%d\n", num1); 
	} 	
	if (num2 > num1 && num2 > num3)
	{ 
		printf("�̤j��Ƭ�%d\n", num2); 
	} 	
	if (num3 > num2 && num3 > num1)
	{ 
		printf("�̤j��Ƭ�%d\n", num3);
	} 	
	if (num1 < num2 && num1 < num3)
	{ 
		printf("�̤p��Ƭ�%d\n", num1);
	} 	
	if (num2 < num1 && num2 < num3)
	{ 
		printf("�̤p��Ƭ�%d\n", num2); 
	} 	
	if (num3 < num1 && num3 < num2)
	{ 
		printf("�̤p��Ƭ�%d\n", num3); 
	}
	if (num1 == num2 && num1 > num3)
	{
		printf("�̤j��Ƭ�%d\n", num1);
	}
	if (num1 == num3 && num1 > num2)
	{
		printf("�̤j��Ƭ�%d\n", num1);
	}
	if (num2 == num3 && num2 > num1)
	{
		printf("�̤j��Ƭ�%d\n", num2);
	}
	if (num1 == num2 && num1 < num3)
	{
		printf("�̤p��Ƭ�%d\n", num1);
	}
	if (num1 == num3 && num1 < num2)
	{
		printf("�̤p��Ƭ�%d\n", num1);
	}
	if (num2 == num3 && num2 < num1)
	{
		printf("�̤p��Ƭ�%d\n", num2);
	}
	system("pause");
	return 0;
}
