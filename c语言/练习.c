#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "Hello Hidden.Blue";
	char arr2[] = "*****************";
	int left = 0;
	int right = strlen(arr1) - 1;
	printf("%s\n", arr2);
	while (left <= right){
		Sleep(1000);
		system("cls");
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		left++;
		right--;
		printf("%s\n", arr2);
	}
	system("pause");
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	for (int i = 0; i < 3; i++){
		
		char password[20] = "123456";
		char input[20] = {0};
		printf("请输入密码:");
	    scanf("%s",input);
		
		if (strcmp(input,password) == 0){
			printf("登陆成功\n");
			break;
		}
		else{
			printf("登陆失败\n");
		}

	}
	system("pause");
	return 0;
}



int bin_search(int tofind, int left, int right, char arr[]){
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right){
		int mid=(left + right) / 2;
		if (tofind < arr[mid]){
			right = mid - 1;
		}
		else if (tofind>arr[mid]){
			left = mid + 1;
		}
		else{
			printf("下标是%d\n", mid);
			break;
		}
	}
	if (left > right){
		printf("找不到\n");
	}
}