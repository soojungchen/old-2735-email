#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)
int main()
{
	int i = 1;
	while( i <= 100){
		if (i % 3 == 0){
			printf("%d ", i);		
		}
		i++;
	}
	system("pause");
	return 0;
}