#include <stdio.h>
#define N 1e-4
int main()
{
	float a = 11.0;
	float b = a / 3.0;
	if (b * 3.0 - a < N && b * 3.0 - a > -N) {
		printf("���, �˴������ϸ����, �����������\n");
	} else {
		printf("�����\n");
	}
	system("pause");
	return 0;
}