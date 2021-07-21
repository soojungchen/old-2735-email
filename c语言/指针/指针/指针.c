#include <stdio.h>
int main()
{
	int num = 0;
	int num2 = 10;
	int* const p = &num;
	*p = 100;
	p = &num2;
	system("pause");
	return 0;
}