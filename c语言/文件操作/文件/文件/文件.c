#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
enum { SIZE = 5 };
int main()
{
	int a = 10000;
	FILE* pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中    
	fclose(pf);
	pf = NULL;
	system("pause");
	return 0;
}
