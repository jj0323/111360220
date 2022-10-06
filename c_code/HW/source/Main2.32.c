#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float h, w, b;
	printf("請輸入你的身高(公尺)、體重(公斤)：\n");
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