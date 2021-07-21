#include <stdio.h>
#define N 1e-4
int main()
{
	float a = 11.0;
	float b = a / 3.0;
	if (b * 3.0 - a < N && b * 3.0 - a > -N) {
		printf("相等, 此处不是严格相等, 而是允许误差\n");
	} else {
		printf("不相等\n");
	}
	system("pause");
	return 0;
}