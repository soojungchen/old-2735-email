#include <stdio.h>
int main()
{
	char arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//tofind��ʾҪ�ҵ�����
	int tofind = 7;
	//���������Ԫ�ص��±�
	int left = 0;
	//�������ұ�Ԫ�ص��±�
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//sizeof(arr)�Ǽ���arr���ֽڣ�sizeof(arr[0])�Ǽ��������е�һ�����ֽ�
	//��������������鳤��
	while (left <= right){
		int mid = (left + right) / 2;
		if (tofind > arr[mid]){//˵����Ҫ���ҵ�����mid ���ұߣ������Ҫ���Ҳ���
			left = mid + 1;
		}
		else if (tofind < arr[mid]){
			right = mid - 1;
		}
		else{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left>right){
		printf("�Ҳ���");
	}
	system("pause");
	return 0;
}