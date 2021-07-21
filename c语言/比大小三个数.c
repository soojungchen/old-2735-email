#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
	printf("请输入三个数：");
	    int a = 0;
		int b = 0;
		int c = 0;
		int p;
		scanf("%d %d %d", &a, &b, &c);
		if (a < b){
			p = a;
			a = b;
			b = p;

		}
		if (a < c){
			p = a;
			a = c;
			c = p;

		}

		if (b < c){
			p = b;
			b = c;
			c = p;

		}


		printf("%d %d %d\n", a, b, c);
		system("pause");
		return 0;

}