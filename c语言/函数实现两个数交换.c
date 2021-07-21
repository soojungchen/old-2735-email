#include <stdio.h>
int swap(int* x, int* y){
	int temp = *x;
	*x = *y;
	*y = temp;
	return 0;
}

int main()
{
	int a = 50;
	int b = 100;
	swap(&a, &b);
	printf("%d %d", a, b);
	system("pause");
	return 0;
}
