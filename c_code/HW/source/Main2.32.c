#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h, w, b;
	printf("�п�J�A������(����)�B�魫(����)�G\n");
	scanf_s("%f%f", &h, &w);
	b = w / h / h;
	if (b < 18.5)
	{
		printf("Underweight");
	}
	if (b >= 18.5&&b <= 24.9)
	{
		printf("Normal");
	}
	if (b >= 25&&b <= 29.9)
	{
		printf("Overweight");
	}
	if (b >= 30)
	{
		printf("Obese");
	}
	return 0;
}