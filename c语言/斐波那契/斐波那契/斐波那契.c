#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int fib(int n){
//	if (n == 1){
//		return 1;
//	}
//	if (n == 2){
//		return 1;
//	}
//	return fib(n - 1) + fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	printf("请输入要求第几个数字：");
//	scanf("%d", &n);
//	printf("%d\n", fib(n));
//	system("pause");
//	return 0;
//}



int fib(int n){
	if (n == 1){
		return 1;
	}
	if (n == 2){
		return 1;
	}
	int last1 = 1;
	int last2 = 1;
	int cur = 0;
	for (int i = 3; i <= n; i++){
		cur = last1 + last2;
		last2 = last1;
		last1 = cur;
	}
	return cur;
}

int main()
{
	int n = 0;
	printf("请输入要求第几个数字：");
	scanf("%d", &n);
	printf("%d\n", fib(n));
	system("pause");
	return 0;
}