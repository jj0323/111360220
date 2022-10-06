#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, t;
	printf("一整天的總里程數：\n");
	printf("汽油一公升/加侖多少錢：\n");
	printf("平均一公升/加侖能行駛多少公里：\n");
	printf("一天的停車費：\n");
	printf("一天的通行費(過路費)：\n");
	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
	t = (a / c)*b + d + e;
	printf("一天下來開車去工作的花費為%f", t);
	return 0;
}