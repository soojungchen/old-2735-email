int IsPrime(int n){
	if (n == 1 || n <1){ //��������<1����=1����������
		return 0;
	}
	for (int i = 2; i < n; i++){
		if (n%i == 0){//�������ֿ��Ա�2����������������������
			return 0;
		}
	}
		return 1;//��������������
}
#include <stdio.h>
	int main()
{
		int num = 0;
		for (num = 100; num <= 200; num++){
			if (IsPrime(num) == 1){
				printf("%d ", num);
			}
		}
		system("pause");
		return 0;

}

