int IsPrime(int n){
	if (n == 1 || n <1){ //输入数字<1或者=1，不是素数
		return 0;
	}
	for (int i = 2; i < n; i++){
		if (n%i == 0){//输入数字可以被2到它本身整除，不是素数
			return 0;
		}
	}
		return 1;//输入数字是素数
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

