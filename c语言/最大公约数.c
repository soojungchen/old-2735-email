#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a ;
	int b ;
	printf("��������������:");
	scanf("%d %d",&a,&b);
	int rem=a%b ;
	while (rem != 0){
		a = b;
		b = rem;
	}
	printf("���Լ����%d\n",b);
	system("pause");
	return 0;
}