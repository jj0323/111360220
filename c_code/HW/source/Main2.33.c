#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a, b, c, d, e, t;
	printf("�@��Ѫ��`���{�ơG\n");
	printf("�T�o�@����/�[�ڦh�ֿ��G\n");
	printf("�����@����/�[�گ��p�h�֤����G\n");
	printf("�@�Ѫ������O�G\n");
	printf("�@�Ѫ��q��O(�L���O)�G\n");
	scanf_s("%f%f%f%f%f", &a, &b, &c, &d, &e);
	t = (a / c)*b + d + e;
	printf("�@�ѤU�Ӷ}���h�u�@����O��%f", t);
	return 0;
}